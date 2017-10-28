#include <stdio.h>
#include <string.h>
void cp_strncpy(char *,char *,int);
int main(void){
    char target[100],string[100];
    int count;
    printf("输入字符\n");
    gets(string);
    printf("输入需要复制的字数\n");
    scanf("%d",&count);
    cp_strncpy(target,string,count);
}

void cp_strncpy(char *target,char *string,int count){
    int n;
    if(strlen(string) >= count){
        for(n = 0;n < count;n++)
            target[n] = string[n];
        printf("复制之后:%s\n",target);
    }
    else
    if(strlen(string) < count){
        printf("复制之后:%s\n",string);
    }
}

