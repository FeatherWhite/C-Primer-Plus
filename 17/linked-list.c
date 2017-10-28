#include <stdio.h>
#include <stdlib.h>

struct contact_information
{
  int student_id;//不使用数组，结构占用的空间少
  char name;
  int telephone_number;
  struct contact_information *next;
};

int main(void)
{
  FILE *fp;
  struct contact_information *current,*prev;
  struct contact_information *head = NULL;
  if((fp = fopen("contact-information.txt","r")) == NULL)
  {
    fprintf(stderr, "Can't open this file\n");
    exit(1);
  }
  while(!feof(fp))//判断文件是否到结尾 feof()没有到结尾返回0到结尾返回1
  {
    current = (struct contact_information*)malloc(sizeof(struct contact_information));
    if(head == NULL)
      head = current;
    else
      prev->next = current;
    current->next = NULL;//列表中的最后一个为空
    fread(current,sizeof(struct contact_information) - 12,1,fp);//当减去next所占用的空间显示正常
    prev = current;
  }
  //打印
  if(head == NULL)
  {
    printf("No data enter\n");
  }
  else
  current = head;
  printf("student_id      name     telephone\n");
  while(current != NULL)
  {
    fwrite(current,sizeof(struct contact_information) - 12,1,stdout);
    current = current->next;//指向下一个结构地址
  }
  current = head;
  while(current != NULL)
  {
    free(current);
    current = current->next;
  }
  return 0;
}
