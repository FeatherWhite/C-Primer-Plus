#include <stdio.h>
#include "linked_list.h"
#include <stdlib.h>
#include <memwatch.h>

void show_contact_information(Item item);

int main(void)
{
  List contact_information;//暂时把List类比成int这里老子不懂
  Item temp;//将temp定义为一个项目
  FILE *fp;
  char filename[100];
  InitializeList(&contact_information);
  if(ListIsFull(&contact_information))
  {
    fprintf(stderr, "没有内存了,快滚.\n");
    exit(1);
  }
  printf("输入文件名\n");
  scanf("%s",filename);
  fp = Openfile(filename);
  while(!feof(fp))//判断文件是否到达结尾
  {
    fread(&temp,sizeof(Item),1,fp);
    if(AddItem(temp,&contact_information) == false)
    {
      fprintf(stderr, "分配内存时出错\n");
      break;//出错时跳出循环
    }
    if(ListIsFull(&contact_information))
    {
      fprintf(stderr, "列表已满\n");
      break;
    }
  }
  printf("student_id      name     telephone\n");
  if(ListIsEmpty(&contact_information))
    printf("并没有数据,傻逼!\n");
  else
    Traverse(&contact_information,show_contac.t_information);
  printf("你输入的数据个数是%u个\n",ListItemCount(&contact_information));
  EmptyTheList(&contact_information);
  return 0;
}

void show_contact_information(Item item)
{
  fwrite(&item,sizeof(Item),1,stdout);
}
