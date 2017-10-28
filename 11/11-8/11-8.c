#include <stdio.h>
#include <string.h>
void reverse(char *);
int main(void)
{
	 //reverse反序
	int count;
	char string[100],*p;
	printf("请输入一句话\n");
	for (count = 0;(string[count] = getchar()) != '\n';count++);
	string[count] = '\0';
	reverse(string);
	//printf("%d",strlen(string));
	return 0;
}

void reverse(char *string){
	int count;
	for (count = strlen(string) -1;count >= 0;count--){
		printf("%c",string[count]);
	}
	//printf("%d",strlen(string));
	printf("\n");
}

