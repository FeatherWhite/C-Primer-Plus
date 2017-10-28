#include <stdio.h>
void copy_arr(double num[][5] ,double (*)[5],int);
void display(double num[][5],int);
int main(void){
    double num[3][5] = {
        {1.1,1.2,1.3,1.4,1.5},
        {2.1,2.2,2.3,2.4,2.5},
        {3.1,3.2,3.3,3.4,3.5}
    };
    double target[][5]={0};
    copy_arr(num,target,2);
    puts("number:");
    display(num,2);
    puts("target:");
    display(target,2);
    return 0;
}

void copy_arr(double num[][5],double (*target)[5],int rows){
    int count,count1;
    for(count = 0;count <= rows;count++){
        for(count1 = 0;count1 <= 4;count1++)
            target[count][count1] = num[count][count1];
    }
    return;
}

void display(double num[][5],int rows){
    int count,count1;
    for(count = 0;count <=rows;count++){
        for(count1 = 0;count1 <= 4;count1++){
             printf("%lf ",num[count][count1]);
        }
        putchar('\n');
    }
        return;
}
