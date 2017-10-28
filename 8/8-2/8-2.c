#include <stdio.h>
int main(void){
    int n;
    char ch;
    for(n = 0;(ch = getchar()) != EOF;n++){
        if (ch == '\n' || ch == '\t')
            printf("%-5c",ch);
        else
            printf("^%-4c",ch);
        printf("%-5d",ch);
        if (n % 5 == 0)
            printf("\n");
    }
    putchar('\n');
}
