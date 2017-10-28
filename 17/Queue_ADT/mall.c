#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "queue.h"
#define MIN_PER_HR 60.0

bool newcustomer(double x);
Item customertime(long when);

int main(void)
{
  Queue line;
  Item temp;
  int hours;
  int perhour;//每小时客户的平均数
  long cycle,cyclelimit;//循环计数器,计数器的上界
  long turnaways = 0;//因列队已满而被拒绝的顾客数
  long customers = 0;//被加入列队的顾客数
  long served = 0;//得到服务的顾客数
  long sum_line = 0;//累计的队列长度
  int wait_time = 0;//从当前到Sigmund空闲所需的时间
  double min_per_cust;//顾客到来的平均时间
  long line_wait = 0;//队列累计等待时间

  InitializeQueue(&line);
  srand(time(0));
  puts("输入模拟时间");
  scanf("%d",&hours);
  cyclelimit = MIN_PER_HR * hours;
  puts("输入每小时顾客的平均数");
  scanf("%d",&perhour);
  min_per_cust = MIN_PER_HR / perhour;

  for(cycle = 0;cycle < cyclelimit;cycle++)
  {
    if(newcustomer(min_per_cust))
    {
      if(QueueIsFull(&line))
        turnaways++;
      else
      {
          customers++;
          temp = customertime(cycle);
          EnQueue(temp,&line);
      }
    }
    if(wait_time <= 0 && !QueueIsEmpty(&line))
    {
      DeQueue(&temp,&line);
      wait_time = temp.processtime;
      line_wait += cycle - temp.arrive;
      served++;
    }
    if(wait_time > 0)
      wait_time--;
    sum_line += QueueItemCount(&line);
  }
  if(customers > 0)
  {
    printf("得到服务的顾客数:%ld\n",served);
    printf("    列队中顾客数:%ld\n",customers);
    printf("  被拒绝的顾客数:%ld\n",turnaways);
    printf("  列队中平均人数:%.2f\n",(double)sum_line / cyclelimit );
    printf("    平均等待时间:%.2f分\n",(double)line_wait / served);
  }
  else
    puts("没有客人");
  EmptyTheQueue(&line);
  puts("Bye");
  return 0;
}


  bool newcustomer(double x)
  {
    if(rand() * x / RAND_MAX < 1)
      return true;
    else
      return false;
  }

  Item customertime(long when)
  {
    Item cust;
    cust.processtime = rand() % 3 + 1;
    cust.arrive = when;
    return cust;
  }
