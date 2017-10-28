/*-------------------------------------------    �����ļ��к��е��ַ���--------------------------------------   */
#include <stdio.h>
#include <stdlib.h>
#define MAX 40
int main(void) {
	char ch,name[40];
	FILE *fp;
	long count = 0;
	puts("Input filename.\n");
	gets(name);
	if ((fp = fopen(name, "r")) == NULL) {
		fprintf(stderr, "Can't creat %s", name);
		exit(1);
	}
	while ((ch = getc(fp)) != EOF) {
		putc(ch, stdout);
		count++;
	}
	puts("\n");
	fclose(fp);
	printf("File %s have %ld characters\n", name, count);
	return 0;
}
