#include <stdio.h>
#include <stdlib.h>
int main(void) {
	FILE *file;
	char name[40],content[80];//content ����
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
		column--;//���㿪ʼ����Ҫ�ȼ�ȥ��1
		while (row--)
			fgets(content,80,file);//���ļ���row�п�ͷ�ĵ�ַ���ݸ��ַ�����ͷ�ĵ�ַ���ҽ��ļ�λ�ö�λ����row��
		fseek(file, column, SEEK_CUR);
		fgets(content, 80, file);
	puts(content);
		printf("Input row column:");
	}
	return 0;
}
