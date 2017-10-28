#include <stdio.h>
#include "pe12-2a.h"
void set_mode(int);
void get_info(void);
void show_info(void);
int main(void){
    int mode;
    printf("输入0选择公制模式,输入1选择美制模式:");//metric公制
    scanf("%d",&mode);
    while(mode >= 0){
        set_mode(mode);
        get_info();
        show_info();
        printf("按0选择公制模式,按1选择美制模式:");
        printf("输入-1离开");
        scanf("%d",&mode);
    }
    printf("完成\n");
    return 0;
}
