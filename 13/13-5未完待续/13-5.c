/*--------------------------------------------     append������ļ�����׷�ӵ�һ���ļ���-------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFSIZE 1024
#define NUM 81
void append(FILE *source, FILE *target);
int main(int argc, char *argv[]) {
	FILE *fsource, *ftarget;
	if ((fsource = fopen(argv[1], "r")) == NULL) {
		fprintf(stderr, "Can't open %s", argv[1]);
		exit(1);
	}
	if ((ftarget = fopen(argv[2], "a")) == NULL) {//a��һ���ļ�����д���ļ��������ļ��Ľ�β׷������
		fprintf(stderr, "Can't open %s", argv[2]);
		exit(3);
	}
	if (setvbuf(ftarget, NULL, _IOFBF, BUFSIZE) != 0) {
		fprintf(stderr, "Can't create output buffer");
		exit(2);
	}
	if (setvbuf(ftarget, NULL, _IOFBF, BUFSIZE) != 0) {
		fprintf(stderr, "Can't create output buffer");
		exit(4);
	}
}
