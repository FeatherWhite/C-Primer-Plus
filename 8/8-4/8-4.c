#include <stdio.h>
#include <ctype.h>
int main(void){
    double n = 0,i = 0;
    char ch,ch1;
    printf("请输入一段英文原句\n程序将计算每个单词的平均字母数\n");
    while((ch = getchar()) != EOF){
        if(isalpha(ch))
            i++;
        if (isspace(ch) && isalpha(ch1))
            n++;
        ch1 = ch;
    }
    printf("\n单词的个数%lf %lf\n",n,i);
    printf("平均值是%lf\n",i / n);
}
