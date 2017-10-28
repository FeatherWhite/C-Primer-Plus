#include <stdio.h>
#include <ctype.h>
int main(void){
    char ch1;
    ch1 = getchar();
    while (!isalpha(ch1)){
        ch1 = getchar();
    }
        printf("%c\n",ch1);
}
