#include <stdio.h>
#include <ctype.h>
#include <string.h>
void put(char (*)[100],int);
void ascii_put(char (*)[100],int);
void length_put(char (*)[100],int);
void word_put(char(*)[100],int);
int main(void){
    char str[10][100],command;
    int count = 0,num = 0;
    do{
    printf("a.输出字符串\t");
    printf("b.按ASCII顺序输出字符串\n");
    printf("c.按长度递增顺序输出字符串\t");
    printf("d.按字符串中第一个单词的长度输出字符串\n");
    printf("e.重新输入字符串\t输入q退出\n");
    printf("请输入将要执行程序的序号\n");
    scanf("%c",&command);
    while(getchar() != '\n');
    printf("请输入10个字符串\n");
    while((str[count][num] = getchar()) != EOF && count < 10){
        if (str[count][num] == '\n'){
        num = 0;
        count++;
        num--;
        }
        num++;
     }
    switch(command){
        case 'a':put(str,count);break;
        case 'b':ascii_put(str,count);break;
        case 'c':length_put(str,count);break;
        case 'd':word_put(str,count);break;
        case 'e':continue;
        default:puts("Quit");return 0;
      }
    }
    while(command != 'q');
}

void put(char (*str)[100],int count){
    int num;
    printf("\n");
    for (num = 0;num < count;num++){
         puts(str[num]);
    }
}

void ascii_put(char (*str)[100],int count){
    int num1,num2,num3;
    char larger;
    for (num1 = 0;num1 < count;num1++){
        for (num2 = 0;num2 < strlen(str[num1]);num2++){
            for (num3 = num2;num3 < strlen(str[num1]);num3++){
                if (str[num1][num2] >= str[num1][num3]){
                    larger = str[num1][num3];
                    str[num1][num3] = str[num1][num2];
                    str[num1][num2] = larger;
                }
            }
        }
    }
    for (num1 = 0;num1 <= count;num1++){
        puts(str[num1]);
    }
}

void length_put(char (*str)[100],int count){
    int num1,num2;
    char *p = str[0],*temp;
    for (num1 = 0;num1 < count;num1++){
        for (num2 = 0;num2 < count - num1 - 1;num2++){
            if (strlen(str[num2]) > strlen(str[num2 + 1])){
                temp = p[num2];
                p[num2] = p[num2 + 1];
                p[num2 + 1] = temp;
            }
        }  
    }
    for (num1 = 0;num1 < count;num1++)
    puts(str[num1]);
}


void word_put(char (*str)[100],int count){
    int num = 0,num1,num2,tally[10];
    char *p = str[0];
    for(num = 0;num < count;num++){
    while (isspace(p[num])){
        p[num]++;
    }
    while (!isspace(p[num])){
        p[num]++;
        tally[num]++;
    }
}
    for (num1 = 0;num1 < count;num1++){
      for(num2 = 0;num2 < strlen(str[num1]);num2++){
       printf("%c",str[num1][num2]);
       if(num2 % tally[num1] == 0){  
            printf(" "); 
            }
        }  
    }
}


