#include <stdio.h>
#include "queue.h"
#include <stdlib.h>

static void CopyToNode(Item item,Node *pn);
static void CopyToItem(Node * pn,Item * pi);

void InitializeQueue(Queue *pq)
{
  pq->front = pq->rear =NULL;
  pq->items = 0;
}

bool QueueIsFull(const Queue *pq)
{
  return pq->items == 10;
}

bool QueueIsEmpty(const Queue *pq)
{
  return pq->items == 0;
}

int QueueItemCount(const Queue *pq)
{
  return pq->items;
}

bool EnQueue(Item item,Queue *pq)//添加时在首端
{
  Node *pnew;
  if(QueueIsFull(pq))
    return false;
  pnew = (Node *)malloc(sizeof(Node));
  if(pnew == NULL)
  {
    fprintf(stderr,"内存分配错误\n");
    exit(1);
  }
  CopyToNode(item,pnew);
  pnew->next = NULL;
  if(QueueIsEmpty(pq))//当列队开始项目为空的时候
    pq->front = pnew;
  else
    pq->rear->next = pnew;
  pq->rear = pnew;
  pq->items++;
  return true;
}

bool DeQueue(Item *pitem,Queue *pq)//删除时在首端
{
  Node * pt;
  if(QueueIsEmpty(pq))
    return false;
  CopyToItem(pq->front,pitem);
  pt = pq->front;
  pq->front = pq->front->next;
  free(pt);
  pq->items--;
  if(pq->items == 0)
    pq->rear = NULL;
  return true;
}

void EmptyTheQueue(Queue * pq)
{
  Item dummy;
  while (!QueueIsEmpty(pq))
    DeQueue(&dummy,pq);
}

static void CopyToNode(Item item,Node *pn)
{
  pn->item = item;
}

static void CopyToItem(Node * pn,Item *pi)
{
  *pi = pn->item;
}
