#include <stdio.h>
#include <string.h>
char *string_in(char *,char *);
int main(void)
{
	char string1[100],string2[100],*p;
	printf("请输入字符\n");
	gets(string1);
	printf("请输入字符\n");
	gets(string2);
	p = string_in(string1,string2);
	printf("首字母的地址是:%p",p);
}

char *string_in(char *string1,char *string2){
	char *p1_save = string1,*p2_save = string2;
	if (*string1 == '\0' || *string2 == '\0')
		return NULL;
	while(1){
	if (*string1 == *string2){
		if (*++string2 == '\0')
			return p1_save;
		if (*++string1 == '\0')
			return NULL;
		}
		else{
			if (*++string1 == '\0')
				return NULL;
			p1_save = string1;
			string2 = p2_save;
		}
	}
}