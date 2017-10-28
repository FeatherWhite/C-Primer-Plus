/*--------------------------将单词保存到一个文件中并输出----------------------------*/
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
	puts("key at the beginning of  a line to terminate.");//向文件中输入单词在一行的开头按下空格结束
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