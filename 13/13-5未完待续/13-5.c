/*--------------------------------------------     append将多个文件内容追加到一个文件中-------------------------------------------------------*/
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
	if ((ftarget = fopen(argv[2], "a")) == NULL) {//a打开一个文件可以写入文件向已有文件的结尾追加内容
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
