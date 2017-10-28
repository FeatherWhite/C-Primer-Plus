#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX 40
int main(void) {
	char string,ch;
	FILE *source, *target;
	char in[MAX], out[MAX];
	printf("Input source file name\n");
	gets(in);
	printf("Input target file name\n");
	gets(out);
	if ((source = fopen(in, "rb")) == NULL) {
		fprintf(stderr, "Can't read this file\n");
		exit(1);
	}
	if ((target = fopen(out, "wb")) == NULL) {
		fprintf(stderr, "Can't write this file\n");
		exit(2);
	}
	while ((string = getc(source)) != EOF) {
		ch = toupper(string);
		putc(ch, target);
	}
	fclose(source);
	fclose(target);
	return 0;
}