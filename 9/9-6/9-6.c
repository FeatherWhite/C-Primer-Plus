#include <stdio.h>
#include <ctype.h>
void alp_order(char);
int main(void){
    char ch;
    printf("输入一个字符\n");
    scanf("%c",&ch);
    alp_order(ch);
    return 0;
}

void alp_order(char ch){
        if (isalpha(ch) && isupper(ch))
            printf("%d\n",ch - 'A' + 1);
        else if (isalpha(ch) && islower(ch))
            printf("%d\n",ch - 'A' - 31);
        else
        printf("-1\n");
}
