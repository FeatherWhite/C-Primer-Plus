#include <stdio.h>
void large_of(double*,double*);
int main(void){
    double num1,num2;
    printf("输入两个数程序将比较大小\n");
    printf("将较大的数赋给两个\n");
    scanf("%lf%lf",&num1,&num2);
    large_of(&num1,&num2);
    printf("最大值%lf %lf\n",num1,num2);
    return 0;
}

void large_of(double *num1,double *num2){
    if (*num2 >= *num1)
        *num1 = *num2;
    if (*num1 > *num2)
        *num2 = *num1;
}


