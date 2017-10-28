#include <stdio.h>
#include <stdlib.h>
int main(int argc, char  *argv[]) {
	FILE *file;
	int num,count = 0;
	int string;
	if (argc == 1) {
		while ((string = getc(stdin)) != EOF)
			count++;
		printf("stdin word number is %d", count);
		exit(1);
	}
	for (num = 1; num < argc; num++) {
		if ((file = fopen(argv[num], "r")) == NULL) {
			fprintf(stderr, "Can't open %s", argv[num]);
			exit(1);
		}
		while ((string = getc(file)) != EOF) {
			putchar(string);
			count++;
		}
	putchar('\n');
	printf("%s word number is %d\n", argv[num], count);
		count = 0;
	}
}