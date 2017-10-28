#include <stdio.h>
#include <ctype.h>
double im_atoi(char *);//imitation模仿
int main(void){
    char str[100];
    printf("请输入数字字符串\n");
    gets(str);
    printf("%lf",im_atoi(str));
    return 0;
}

double im_atoi(char *str){
    double n = 0;
    int num = -1,count;
    while(1){
        if (isdigit(*str)){
          n = n * 10 + (*str) - '0';  
          if (num != -1)
          num++;
          }
        else if (*str == '.' && num == -1)
        num = 0;//开启小数位计数
        else
        break;
        str++;
    }
        for(;num > 0;num--)
        n /= 10;
     return n;
}