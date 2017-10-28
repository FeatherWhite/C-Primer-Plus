#include <stdio.h>
#include <string.h>
#define MAX 10

struct member
{
  char fname[20];
  char lname[20];
  int bat;//上场次数
  int hit;//击中数
  int walk;//走垒数
  int RBI;//跑点数
  float average;//击球平均成功率
};

void clear(struct member *);
void get_info(struct member *);
void cal_average(struct member *);
void display(struct member *);

int main(void)
{
  struct member members;
  clear(&members);
  get_info(&members);
  cal_average(&members);
  display(&members);
  return 0;
}

void clear(struct member *members)
{
  int count;
  for(count = 0;count < MAX;count)
  {
  strcpy((members + count)->fname,"");
  strcpy((members + count)->lname,"");
  (members + count)->bat = 0;
  (members + count)->hit = 0;
  (members + count)->walk = 0;
  (members + count)->RBI = 0;
  (members + count)->average = 0;
  }
}

void get_info(struct member *members)
{
int number,bat,hit,walk,RBI;
char fname[20],lname[20];
char filename[10];//声明文件名 字符数组
FILE *file;
printf("please input file name\n");
scanf("%s",filename);//获得文件名
while ((file = fopen(filename,"r")) == NULL)
  {
    printf("filename is wrong input file name again\n");
    scanf("%s",filename);
  }
  while(fscanf(file,"%d,%s,%s,%d,%d,%d,%d",&number,fname,lname,&bat,&hit,&walk,&RBI) == 7)
  {
    strcpy((members + number)->fname,fname);
    strcpy((members + number)->lname,lname);
    (members + number)->bat += bat;
    (members + number)->hit += hit;
    (members + number)->walk += walk;
    (members + number)->RBI += RBI;
  }
  if (fclose(file) == 0)
  fprintf(stderr,"close file fail");
}

void cal_average(struct member *members)
{
  int count;
  for (count = 0;count < 20;count++)
  {
    if((members + count)->bat)
    (members + count)->average = (float)members[count].hit / (float)members[count].bat;
  }
}

void display(struct member *members)
{
  int count;
  struct member total = {"", "", 0, 0, 0, 0, 0};
  printf("%7s%10s%10s%5s%5s%5s%5s%10s\n","number", "firstname", "lastname", "bat", "hit",
"walk", "RBI", "average");
for(count=0; count < 20; count++)
{
  if(members[count].bat )
    {
      printf("%7d%10s%10s%5d%5d%5d%5d%10g\n",count, members[count].fname, members[count].lname, members[count].bat,
      members[count].hit, members[count].walk, members[count].RBI, members[count].average);
      total.bat += members[count].bat;
      total.hit += members[count].hit;
      total.walk += members[count].walk;
      total.RBI += members[count].RBI;
    }
}
if(total.bat)
total.average = (float)total.hit / (float)total.bat;
printf("%27s%5d%5d%5d%5d%10g\n","total team", total.bat, total.hit, total.walk, total.RBI,total.average);
}
