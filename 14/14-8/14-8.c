#include <stdio.h>

char choose(void);
void read();
void show_empty_num();
void show_empty_list();
void show_order();
void assign_seat();
void del_seat();
void write_file(struct seat *point,char *filename)

struct seat
{
  int code;
  int assign;
  char fname;
  char lname;
}

int main(void)
{
  struct seat info[12];
  char options;
    while(choose() != 'f')
    {
      options = choose();
      switch (options) {
        case: 'a':show_empty_num(info);break;
        case: 'b':show_empty_list(info);break;
        case: 'c':show_order(info);
        case: 'd':assign_seat(info);
        case: 'e':del_seat(info);
        default: write_file(info);printf("exit");exit(1);
      }
    }
    return 0;
}

char choose(void)
{
  char options;
  printf("\nTo choose a function, enter its letter label:\n");
  printf("a) Show number of empty seats\n");
  printf("b) Show list of empty seats\n");
  printf("c) Show alphabetical list of seats\n");//按字母顺序排列
  printf("d) Assign a customer to a seat assignment\n");
  printf("e) Delete a seat assignment\n");//assignment 分配
  printf("f) Quit\n");
  scanf("%c",&options);
  return options;
}

void read(struct seat *info)
{
  FILE *file;
  printf("Please input file name\n");
  scanf("%s",&filename);
  if((file = fopen(filename,"rb")) != NULL)
  {
    rewind(file);
    while(fread(info,size_t(struct seat),12,file) == 1);//十二个数据块每个数据块包括四个元素写入file
  }
  else
  {
  printf("Open file fail\n");
  exit(1);
  }
  if(fclose(file) != 1)
    printf("Close file fail\n");
  else
    printf("read file successfully\n");
}

void show_empty_num(struct seat *info)
{
  int count,number = 0;
  for(count = 0;count < 12;count++)
  {
    if((info+count)->assign == 0)
    {
      number++;
    }
  }
}

void show_empty_list(struct seat *info)
{
  int count,num = 0;
  for(count = 0;count < 12;count++)
  {
    if(info[count]->assign == 0)
    {
      num++;
    }
  }
}

void show_order(struct seat *info)
{
  
}

void assign_seat(struct seat *info)
{

}

void write_file(struct seat *info)
{
  FILE *file;
  printf("We will update those information ");
  printf("please input file name\n");
  scanf("%s",&filename);
  if((file = fopen(filename,"wb")) == NULL)
  {
    printf("Open file fail\n");
    exit(1);
  }
    fwrite(file,size_t(struct seat),12,info);
    if(fclose(file) != 1)
    printf("Close file fail\n");
}
