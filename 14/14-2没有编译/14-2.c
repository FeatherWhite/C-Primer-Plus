#include <stdio.h>
#include <string.h>
#include <ctype.h>
int judg(int );//判断是否是闰年
int monthd(int ,int ,int *);//返回特定月份的天数
struct dmy {
    int days;
    char moname[12];
	int monthdays[12];//记录月份的天数
    int years;
};

int main(void){
    int num,count,yeardays;//num记录数字字符转换成数字的变量
    struct dmy dmys;
	char moname[12][9] = {
		" january","february","march",
		"april","may","june","july",
		"august","september","october",
		"november","december "};//月份的名字
	int dmys.monthdays[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int monday,count;//记录月份天数的变量
	int sum = 0;
    puts("Input day month year");
    scanf("%d",&dmys.days);
    gets(dmys.monthname);
    scanf("%d",&dmys.years);
		yeardays  = judg(&dmys.years);//闰年或平年的天数
    if(isalnum(dmys.monthname[0])){//将数字字符月份转化为数字
        num = atoi(dmys.moname) - 1;//atoi数字字符到数字
		}
    else
    for(count = 0;count < 12;count++){//将英文月份转化为数字月份
		if (strchr(moname[count],dmys.monthname) != NULL){
			num = count;
			}
		}
	if (num = 1) {
		monday = monthd(num, dmys.years, dmys.month);//返回月份的天数
	}
	else
		monday = dmys.monthdays[num];
	for (count = num; count < 12; count++) {//计算最终答案
		sum = dmys.monthdays[count] + sum;
	}
	sum = sum + monday - dmys.days + 1;
	printf("%d", sum);
		return 0;
}

int judg(int years) {
	int yeardays;
	if ((years % 4 == 0 && years % 100 != 0) || years % 400 == 0) {
		yeardays = 366;
	else
		yeardays = 365;
	}
	return yeardays;//返回闰年或平年的天数
}

int monthd(int month,int yeardays,int *monthdays) {
	
	if (yeardays == 366 && month == 1) {
		  return monthdays [month] + 1;
	}
	return monthdays;
}



