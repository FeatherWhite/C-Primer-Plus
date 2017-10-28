#include <stdio.h>
#include <ctype.h>
int main(void){
    char ch;
    int n = 0,i = 0;
    printf("请输入一段话有大写和小写字母\n程序将帮你判断大写小写字母的个数\n");
    while ((ch = getchar()) != EOF){
        if(islower(ch))
            n++;
        else if(isupper)
            i++;
    }
    printf("\n小写字母的个数%d\n",n);
    printf("大写字母的个数%d\n",i);
}
