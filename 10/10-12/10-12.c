#include <stdio.h>
int main(void){
    double num[3][5] = {0},average[3] = {0},sum[3] = {0},sum_up = 0;
    double max = 0;
    int count1,count2,count;
    printf("请输入3x5的二位数组\n");
    for(count1 = 0;count1 <= 2;count1++){
        for(count2 = 0;count2 <= 4;count2++){
            scanf("%lf",&num[count1][count2]);
            sum[count1] = sum[count1] + num[count1][count2];
            sum_up = sum_up + num[count1][count2];
            if(count2 % 4 == 0 && count2 != 0)
                average[count1] = sum[count1] / 5;
            if (num[count1][count2] > max)
                max = num[count1][count2];
         }
    }
    for (count = 0;count <= count1 - 1;count++){
        printf("average:%d %lf\n",count + 1,average[count]);
        printf("sum:    %d %lf\n",count + 1,sum[count]);
    }
    printf("%lf\n",sum_up / 15);
    return 0;
}



