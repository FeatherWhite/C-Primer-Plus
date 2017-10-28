#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	FILE *source, *target;
	char ch;
	if (argc < 2) {
		printf("Usage: %s + filename + filename\n", argv[0]);
		exit(1);
	}
	if ((source = fopen(argv[1],"rb")) == NULL) {
		fprintf(stderr,"Can't open this file\n");
		exit(2);
	}
	if ((target = fopen(argv[2],"wb")) == NULL){
		fprintf(stderr, "Can't open this file\n");
		exit(3);
	}
	while ((ch = getc(source)) != EOF) {
		putc(ch, target);
	}
	fclose(source);
	fclose(target);
}