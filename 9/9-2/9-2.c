#include <stdio.h>
void chline(char,int,int);
int main(void){
    char ch;
    int line1,line2;
    printf("依次输入字符,两个列数\n");
    scanf("%c",&ch);
    scanf("%d%d",&line1,&line2);
    chline(ch,line1,line2);
}

void chline(char ch,int line1,int line2){
    int num1,num2;
    for (num1 = 1;num1 < line1;num1++)
        putchar(' ');
    for (num2 = line1;num2 <= line2;num2++ )
        printf("%c",ch);
        putchar('\n');
}
