#include <stdio.h>
#include "queue.h"
int main(void)
{
  Queue line;
  Item temp;
  char ch;
  InitializeQueue(&line);
  puts("测试列队的输入,输入a添加一个值");
  puts("输入d删除一个值,输入q退出.");
  while ((ch = getchar()) != 'q')
  {
    if(ch != 'a' && ch != 'd')
      continue;
    if(ch == 'a')
      {
        printf("添加一个整数\n");
        scanf("%d",&temp);
        if(!QueueIsFull(&line))
          EnQueue(temp,&line);
        else
          puts("列队已满");
      }
    else
      {
        if(QueueIsEmpty(&line))
          puts("列队为空");
        else
        {
          DeQueue(&temp,&line);
          printf("从列队中删除%d\n",temp);
        }
      }
    printf("有%d个项目在列队中\n",QueueItemCount(&line));
    puts("测试列队的输入,输入a添加一个值");
    puts("输入d删除一个值,输入q退出.");
  }
  EmptyTheQueue(&line);
  puts("Bye!");
  return 0;
}
