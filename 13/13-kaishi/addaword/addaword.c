/*--------------------------�����ʱ��浽һ���ļ��в����----------------------------*/
#include  <stdio.h>
#include  <stdlib.h>
#define  MAX 40
int main(void){
    int  num,count;
	char words[MAX];
    FILE  *stream;
	if ((stream = fopen("worddy.txt", "a+")) == NULL) {
		fprintf(stderr, "open file error\n");
		exit(1);
	}
	puts("Enter words to add to the file press the Enter");
	puts("key at the beginning of  a line to terminate.");//���ļ������뵥����һ�еĿ�ͷ���¿ո����
	while (gets(words) != NULL && words[0] != '\0')
	fprintf(stream, "%s", words); 
	rewind(stream);
	while (fscanf(stream, "%s", words) == 1) {
		puts(words);
	}
	if (fclose(stream) != 0)
		fprintf(stderr,"close files error\n");
	return 0;
}