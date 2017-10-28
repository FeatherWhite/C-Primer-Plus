#include <stdio.h>
    void to_base_n(int,int);
int main(void){
    int num,sys/*二进制*/;
    printf("输入q离开\n");
    while(scanf("%d%d",&num,&sys) == 2){
        printf("进制换算\n");
        to_base_n(num,sys);
        putchar('\n');
        printf("输入q离开\n");
    }
        printf("Done\n");
        return 0;
}

void to_base_n(int num,int sys){
    int r/*remainder*/;
    r = num % sys;
    if(num > sys){
        to_base_n(num / sys,sys);
    }
    putchar(r + '0');
        return;
}
