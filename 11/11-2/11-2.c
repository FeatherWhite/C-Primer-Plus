#include <stdio.h>
#include <ctype.h>
void input(char (*),int);
int main(void){
    char ch[81] = {0};
    int count;
    printf("请输入字符个数\n");
    scanf("%d",&count);
    getchar();//过滤回车
    printf("请输入字符\n");
    input(ch,count);
    puts(ch);
        return 0;
}
void input(char (*ch),int count){
    int n;
    for(n = 0;n < count;n++){
        *(ch + n) = getchar();
        if (isspace(*(ch + n))){
                break;
                }
    }
    *(ch + n) = '\0';
}
