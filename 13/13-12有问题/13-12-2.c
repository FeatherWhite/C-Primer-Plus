#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define LEVELS 10
void Makepic(int num);
int main(void) {
	char name[8], ch;
	int num = 0, row, column;
	FILE *file;
	puts("Input file name:");
	gets(name);
	if ((file = fopen(name, "r")) == NULL) {
		fprintf(stderr, "Can't open %s\n", name);
		exit(1);
	}
	for (row = 0; row < 20; row++) {
		for (column = 0; column < 30; column++) {
			ch = getc(file);
			if (isdigit(ch)) {
				num = atoi(&ch);
				num = num / 10;
				Makepic(num);
			}
		}
	}
	if (fclose(file) != 0) {
		fprintf(stderr, "Can't close this file\n");
	}
	return 0;
}

void Makepic(int num) {
	FILE *file;
	static column = 0;
	const char trans[LEVELS + 1] = " .':~*=&%@";
	if ((file = fopen("2.txt", "a+")) == NULL) {
		fprintf(stderr, "Can't open 2.txt");
		exit(2);
	}
	fprintf(file, "%c", trans[num]);
	putc(' ', file);
	column++;
		if (column % 30 == 0) {
			putc('\n', file);
		}
}