#include <stdio.h>
#include <ctype.h>
#include <string.h>
char *Delete(char *);
int main(void)
{
    char string[100],*p;
    printf("请输入一串字符\n");
    gets(string);
    p = Delete(string);
    puts(p);
    return 0;
}

char *Delete(char *string){
    char p[100],*p1 = p;
    int count,space = 0,alphabet,count1 = -1;
    for (count = 0;count < strlen(string);count++){
    if(isspace(string[count])){
        space++;
        }
    }
    alphabet = strlen(string) - space;
    space = 0;
    for (count = 0;count < alphabet;count++){
        count1++;
        if(isspace(string[count1])){
            count1++;
        *(p + count) = *(string + count1);
        }
        else
        *(p +count) = *(string + count1);
    }
    *(p + count1) = '\0';
    return p1;
}
