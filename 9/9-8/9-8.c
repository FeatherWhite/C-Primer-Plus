#include <stdio.h>
double power(double,int);
int main(void){
    double bck/*底数*/,result;
    int exp/*指数*/;
    printf("请输入你想运算的底数和指数\n");
    scanf("%lf%d",&bck,&exp);
    result = power(bck,exp);
    printf("%lf的%d次幂是%lf\n",bck,exp,result);
    return 0;
}

double power(double bck,int exp){
    int count;
    double result = 1;
    if(exp == 0)
        result = 1;
    else
            if (exp < 0){
                result = power(bck,-exp);
                result = 1 / result;
            }
            else
                for(count = 1;count <= exp;count++){
                result = result * bck;
        }

        return result;
}
