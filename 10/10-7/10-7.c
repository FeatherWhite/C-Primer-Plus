#include <stdio.h>
void copy_arr(double [],double [],int);
void copy_ptr(double *,double *,int);
int main(void){
    int count = 0;
    double number[7],num;
    double target1[7] = {0};
    double target2[7] = {0};
    printf("输入7个数字\n");
    while (scanf("%lf",&num) == 1){
        number[count] = num;
        count++;
    }
    copy_arr(number,target1,count);
    copy_ptr(number,target2,count);
    printf("%lf %lf %lf \n",target1[2],target1[3],target1[4]);
    printf("%lf %lf %lf \n",target2[2],target2[3],target2[4]);
}

void copy_arr(double number[],double target1[],int count){
    int tally;//计数
    if(count >= 4){
    for(tally = 2;tally <= 4;tally++){
        target1[tally] = number[tally];
        }
    }
}

void copy_ptr(double *number,double *target2,int count){
    int tally;//计数
    if(count >= 4){
        for(tally = 2;tally <= 4;tally++){
            *(target2 + tally) = *(number + tally);
        }
    }
}


