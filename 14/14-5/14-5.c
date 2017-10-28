#include <stdio.h>//结构指针
#define CSIZE 4
struct name
{
  char fname[20];
  char lname[20];
};

struct student
{
  struct name yourname;
  float grade[3];
  float avgrade;
};
void getinfo(struct student *);

int main(void)
{
  struct student info[CSIZE];
  getinfo(info);
  return 0;
}

void getinfo(struct student *info)
{
  int count,all,sum = 0;
  for(all = 0;all < CSIZE;all++)
  {
      sum = 0;
      printf("Please input your name\n");
      scanf("%s%s",(info+all)->yourname.fname,(info+all)->yourname.lname);
      for(count = 0;count < 3;count++)
      {
          printf("Please input your %d grade\n",count + 1);
          scanf("%f",&(info+all)->grade[count]);
          sum = (info+all)->grade[count] + sum;
          printf("your %d grade is %f\n",count + 1,(info+all)->grade[count]);
      }
        (info+all)->avgrade = sum / count;
        printf("%s ",(info+all)->yourname.fname);
        printf("%s's",(info+all)->yourname.lname);
        printf(" average is %f\n",(info+all)->avgrade);
  }
}
