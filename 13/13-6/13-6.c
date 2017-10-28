#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 40
int main(void) {
	FILE *source, *target;
	int string;
	char fsource[LEN],ftarget[LEN];
	int count = 0;
	printf("Input source name:");
	gets(fsource);
	printf("Input target name:");
	gets(ftarget);
	if ((source = fopen(fsource, "rb")) == NULL) {
		fprintf(stderr, "Can't open %s", fsource);
		exit(1);
	}
	strcpy(ftarget, fsource);
	strcat(ftarget, ".txt");
	if ((target = fopen(ftarget, "wb")) == NULL) {
		fprintf(stderr, "Can't creat %s", ftarget);
		exit(2);
	}
	while ((string = getc(source)) != EOF)
		if (count++ % 3 == 0)
			putc(string, target);
	if (fclose(target) != 0 || fclose(source) != 0)
		fprintf(stderr, "Error in closing files\n");
	return 0;
}