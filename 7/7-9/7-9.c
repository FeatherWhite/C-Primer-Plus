#include <stdio.h>
#include <math.h>
int main(void){
    int num,i,n;
    printf("输入一个数字程序将计算出小于它的所有素数\n");
    scanf("%d",&num);
    for (i = 2;i <= num;i++){
        for (n = 2;n < i;n++){
        if (i % n == 0){
            break;
            }
        }
            if(n == i)
            printf("%d ",i);
    }
    putchar('\n');
    return 0;
}
