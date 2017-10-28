/*-----------------------------------reverse反序输出字符串-------------------------------------------    */
#include <stdio.h>
#include <stdlib.h>
#define MAX 40
int main(void) {
	FILE *fp;
	char name[MAX],string,ch;//文件名数组
	long count,lastc;
	puts("Enter the name of the file to be processed");
	gets(name);
	if ((fp = fopen(name, "rb")) == NULL) {
		fprintf(stderr, "reserse can't open %s\n", name);
		exit(1);
	}
	fseek(fp, 0L, SEEK_END);//到文件结尾
	lastc = ftell(fp);//文件中包含的字符串长度
	for (count = 1L; count <= lastc; count++) {
		fseek(fp, -count, SEEK_END);//回退
		ch = getc(fp);
		putchar(ch);
		/* 针对dos unix也能正常运行
		if(ch != CNTL_Z && ch != '\r')
			putchar(ch);
		针对mac
		if (ch == '\r')
			putchar('\n');
		else
			putchar(ch);*/
	}
	putchar('\n');
	fclose(fp);
	return 0;
}