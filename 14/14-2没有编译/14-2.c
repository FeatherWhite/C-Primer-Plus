#include <stdio.h>
#include <string.h>
#include <ctype.h>
int judg(int );//�ж��Ƿ�������
int monthd(int ,int ,int *);//�����ض��·ݵ�����
struct dmy {
    int days;
    char moname[12];
	int monthdays[12];//��¼�·ݵ�����
    int years;
};

int main(void){
    int num,count,yeardays;//num��¼�����ַ�ת�������ֵı���
    struct dmy dmys;
	char moname[12][9] = {
		" january","february","march",
		"april","may","june","july",
		"august","september","october",
		"november","december "};//�·ݵ�����
	int dmys.monthdays[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int monday,count;//��¼�·������ı���
	int sum = 0;
    puts("Input day month year");
    scanf("%d",&dmys.days);
    gets(dmys.monthname);
    scanf("%d",&dmys.years);
		yeardays  = judg(&dmys.years);//�����ƽ�������
    if(isalnum(dmys.monthname[0])){//�������ַ��·�ת��Ϊ����
        num = atoi(dmys.moname) - 1;//atoi�����ַ�������
		}
    else
    for(count = 0;count < 12;count++){//��Ӣ���·�ת��Ϊ�����·�
		if (strchr(moname[count],dmys.monthname) != NULL){
			num = count;
			}
		}
	if (num = 1) {
		monday = monthd(num, dmys.years, dmys.month);//�����·ݵ�����
	}
	else
		monday = dmys.monthdays[num];
	for (count = num; count < 12; count++) {//�������մ�
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
	return yeardays;//���������ƽ�������
}

int monthd(int month,int yeardays,int *monthdays) {
	
	if (yeardays == 366 && month == 1) {
		  return monthdays [month] + 1;
	}
	return monthdays;
}



