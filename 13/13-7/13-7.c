#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	FILE *file1, *file2;
	int count;
	char string1, string2;
	if (argc != 3) {
		printf("Usage: %s +filename +filename", argv[0]);
		exit(1);
	}
	if ((file1 = fopen(argv[1], "r")) == NULL) {
		fprintf(stderr, "Can't open file %s", argv[1]);
		exit(2);
	}
	if ((file2 = fopen(argv[2], "r")) == NULL) {
		fprintf(stderr, "Can't open file %s", argv[2]);
		exit(3);
	}
	while ((string1 = getc(file1)) != EOF) {
			if (string1 == '\n') {
				putc(string1, stdout);
				while ((string2 = getc(file2)) != '\n') {
					putchar(string2);
				}
			}
			putchar(string1);
		}
	fclose(file1);
	fclose(file2);
}