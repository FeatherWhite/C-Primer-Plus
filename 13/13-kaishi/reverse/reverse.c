/*-----------------------------------reverse��������ַ���-------------------------------------------    */
#include <stdio.h>
#include <stdlib.h>
#define MAX 40
int main(void) {
	FILE *fp;
	char name[MAX],string,ch;//�ļ�������
	long count,lastc;
	puts("Enter the name of the file to be processed");
	gets(name);
	if ((fp = fopen(name, "rb")) == NULL) {
		fprintf(stderr, "reserse can't open %s\n", name);
		exit(1);
	}
	fseek(fp, 0L, SEEK_END);//���ļ���β
	lastc = ftell(fp);//�ļ��а������ַ�������
	for (count = 1L; count <= lastc; count++) {
		fseek(fp, -count, SEEK_END);//����
		ch = getc(fp);
		putchar(ch);
		/* ���dos unixҲ����������
		if(ch != CNTL_Z && ch != '\r')
			putchar(ch);
		���mac
		if (ch == '\r')
			putchar('\n');
		else
			putchar(ch);*/
	}
	putchar('\n');
	fclose(fp);
	return 0;
}