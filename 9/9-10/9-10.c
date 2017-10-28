#include <stdio.h>
int Fib(int);
int main(void){
   printf("计算Fibonacci数列\n");
   printf("请输入位数输入q退出\n");
   int num,count,result;
   while(scanf("%d",&num) == 1){
       for(count = 1;count <= num;count++){
            result = Fib(count);
            printf("%d ",result);
       }
       printf("请输入您所要的计算到的位数\n");
   }
   printf("Done\n");
   return 0;
}

int Fib(int num){
    int result,count;
    if (num < 3){
        result = 1;
    }
    else
        for (count = 3;count <= num;count++){
        result = Fib(count - 1) + Fib(count - 2);
    }
    return result;
}
