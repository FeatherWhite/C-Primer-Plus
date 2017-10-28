#include <stdio.h>
#include "pe12-2a.h"

static int present_mode = METRIC;
static double distance;
static double fuel;

void set_mode(int mode){
    if (mode == METRIC || mode == US)
        present_mode = mode;
        else
        printf("无效的模式说明.模式%s被使用.\n",present_mode == METRIC?"0(METRIC)":"1(US)");
}

void get_info(void){
    if(present_mode == METRIC){
        printf("输入旅行的距离 千米:");
        scanf("%lf",&distance);
        printf("输入消耗的汽油 升:");
        scanf("%lf",&fuel);
    }
    else{
        printf("输入旅行的距离 米:");
        scanf("%lf",&distance);
        printf("输入消耗的汽油 加仑:");
        scanf("%lf",&fuel);
        }
}

void show_info(void){
     if(present_mode == METRIC)
     printf("每100千米消耗%g的汽油量\n",fuel/(distance/100));  
     else 
     printf("每100千米消耗%g的加仑\n",distance/fuel);
}    



