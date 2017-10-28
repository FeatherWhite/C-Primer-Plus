#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 80
int main(int argc,char *argv[]) {
	char content[MAX];
	FILE *file;
	if (argc != 3) {
		printf("Usage : %s+character string+file name,A total of two parameters");
		exit(1);
	}
	if ((file = fopen(argv[2], "r")) == NULL) {
		fprintf(stderr, "Open %s file error", argv[2]);
		exit(2);
	}
			while(fgets(content, MAX, file) != NULL){
		if ((strstr(content, argv[1])) != NULL) {
			puts(content);
		}
	}
			return 0;
}