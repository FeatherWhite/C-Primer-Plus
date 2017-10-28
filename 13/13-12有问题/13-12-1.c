#include <stdio.h>
#include <stdlib.h>
#define MAX 80
int main(void) {
	FILE *file;//不要忘了加星号傻逼
	char name[MAX],num[20][30];
	int row,column;
	int figure[20][30];
	unsigned int seed;//随机种子
	puts("Input file name");
	gets(name);
	puts("Input random seed");
	scanf("%d",&seed);
	srand(seed);
	if ((file = fopen(name, "w")) == NULL) {
		fprintf(stderr, "Open %s fail",name);
		exit(1);
	}
	for (row = 0; row < 20; row++) {
		for (column = 0; column < 30; column++) {
			figure[row][column] = rand() % 9;
			fprintf(file, "%d", figure[row][column]);
			/*putc(num[row][column], file);*/
			putc(' ', file);
		}
		putc('\n', file);
	}
	if (fclose(file) != 0) {
		fprintf(stderr, "Close file fail");
		exit(2);
	}
	return 0;
}