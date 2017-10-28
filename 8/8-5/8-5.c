#include <stdio.h>
int main(void){
    int min = 1,max = 100,guess;
    char num;
    printf("\t\t\t猜数字\n");
    printf("如果小于你想的数字输入x确定\n");
    printf("否则输入d\n");
    printf("如果猜对了输入y\n");
    printf("与%d相比\n",guess=(min +max)/2);
    while((num = getchar()) != 'y'){
        if (num == 'd'){
            min = guess;
            guess = (min + max)/2;
            printf("与%d相比(d or x)\n",guess);
         }
        if (num == 'x'){
            max = guess;
            guess = (min + max)/2;
            printf("与%d相比(d or x)\n",guess);
        }
    }
    printf("您想的数值是%d\n",guess);
}
