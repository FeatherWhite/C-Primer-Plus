#include <stdio.h>
#include <stdlib.h>
int main(void) {
	FILE *file;
	char name[40],content[80];//content 内容
	long row,column;
	printf("Input name:");
	gets(name);
	if ((file = fopen(name, "r")) == NULL) {
		fprintf(stderr, "Can't open %s", name);
		exit(1);
	}
	fseek(file, 0L, SEEK_SET);
	printf("Input row column:");
	while (scanf("%d%d", &row, &column) == 2) {
		row--;
		column--;//从零开始计数要先减去：1
		while (row--)
			fgets(content,80,file);//将文件第row行开头的地址传递给字符串开头的地址并且将文件位置定位到第row行
		fseek(file, column, SEEK_CUR);
		fgets(content, 80, file);
	puts(content);
		printf("Input row column:");
	}
	return 0;
}
