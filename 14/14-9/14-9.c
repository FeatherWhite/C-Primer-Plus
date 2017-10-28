#include <stdio.h>
#define MAX 12

int flight_choose(void);
int choose(struct flight *);
void show_num_empty(struct flight *);
void show_list_empty(struct flight *);
void show_list(struct flight *);
void assign_seat(struct flight *);
void delete_seat(struct flight *);
void confirm_seat(struct flight *);
void read(struct flight *);
void write(struct flight *);

struct seats
{
  int seatnum;
  int assign;
  char fname[20];
  char lname[20];
};

struct flight
{
  int flightnum;
  struct seats seat[MAX];
};

struct flight flights[4] = {
  {102},{311},{444},{519}
};

int main(void)
{
  int count;
  count = flight_choose();
  while(1)//等待下一次执行命令
  {
    count = flight_choose();
    if(count < 0 || count > 3) break;
    while (choose(&flights[count]));
  }
}

int flight_choose(void)//选择航班
{
  char alp;
  printf("\nTo choose a function, enter its letter label:\n");
  scanf("%c",&alp);
  printf("a) Flights 102\n");
  printf("b) Flights 311\n");
  printf("c) Flights 444\n");
  printf("d) Flights 519\n");
  printf("e) Quit\n");
  scanf("%c\n",&alp);
  getchar();
  switch (alp) {
    case 'a':return 0;
    case 'b':return 1;
    case 'c':return 2;
    case 'd':return 3;
    default:return 4;
  }
}

int choose(struct flight *point)
{
  char alp;
  printf("\nFlight %d:\n",point->flightnum);
  printf("To choose a function, enter its letter label:\n");
  printf("a) Show number of empty seats\n");
  printf("b) Show list of empty seats\n");
  printf("c) Show alphabetical list of seats\n");
  printf("d) Assign a customer to a seat assignment\n");
  printf("e) Delete a seat assignment\n");
  printf("f) Confirm a seat assignment\n");
  printf("g) Exit to the top-level menu\n");
  scanf("%c",&alp);
  getchar();
  switch (alp) {
    case 'a':show_num_empty(struct flight *point);return 1;
    case 'b':show_list_empty(struct flight *point);return 1;
    case 'c':show_list(struct flight *point);return 1;
    case 'd':assign_seat(struct flight *point);return 1;
    case 'e':delete_seat(struct flight *point);return 1;
    case 'f':confirm_seat(struct flight *point);return 1;
    default 'g':return 0;
  }
}
void read(struct flight *point)
{
  char filename;
  FILE *files;
  printf("please input file name\n");
  scanf("%s",&filename);
  getchar();
  if((files = fopen(filename)) != NULL)
  {
    rewind(files);
    while(fread(point,size_t(struct filght),12,files) == 1);
    printf("read file success\n");
    if(fclose(files) != 1)
    {
      printf("close file fail\n");
    }
  }
  else
  {
    printf("can't open file\n");
  }
}
void show_num_empty(struct flight *point)
{
  if(point->assign = 1)
  {
    
  }
}
