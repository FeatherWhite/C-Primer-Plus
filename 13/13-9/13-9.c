#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX 40
int main(void) {
	FILE *file;
	char words[MAX];
	int count = 0,tally = 0;
	if ((file = fopen("worddy.txt", "a+")) == NULL) {
		fprintf(stderr, "Can't open this files.");
		exit(1);
	}
	puts("Enter words to add to the file; press the Enter");
	puts("key at the beginning of  a line to terminate./n");/*terminate жуж╧*/ 
	while (fgets(words, MAX, stdin) != NULL && words[0] != '\n') {
		if (words == ' ') {
			count++;
			fprintf(file, "%d.",count);
		}
		fputs(words, file);
	}
	return 0;
}