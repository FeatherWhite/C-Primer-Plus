#include <stdio.h>
#include <stdlib.h>
#define MAX 40
int main(int argc,char *argv[]) {
	FILE *fp;
	int count;
	char string;
	if (argc == 1) {
		printf("Usage: %s+filename+filename.", argv[0]);
		exit(1);
	}
	printf("Input you want display files\n");
	for (count = 1; count <= argc; count++) {
		if ((fp = fopen(argv[count], "rb")) == NULL) {
			fprintf(stderr, "Read file %s fail", argv[count]);
			exit(2);
		}
		while ((string = getc(fp)) != EOF) {
			putchar(string);
		}
		printf("\n");
	}
	return 0;
}