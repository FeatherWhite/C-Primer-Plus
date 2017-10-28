#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
int main (void){
    bool inword = false;
    int alphabets = 0/*字母*/,words = 0;
    char ch;
    printf("请输入一段英文原句\n");
    printf("程序将计算每个单词的平均字母数\n");
    while((ch=getchar()) != EOF){
    if(!isspace(ch))
        alphabets++;
    if(!isspace(ch) && !inword){/*遇见一个新单词*/
        words++;
        inword = true;
    }
    if(isspace(ch) && inword){
        inword = false;
    }
  }
    printf("\n单词的个数%d\n",words);
    printf("字母的个数%d\n",alphabets);
    printf("每个单词的平均字母个数%f\n",(double)alphabets/(double)words);
}
