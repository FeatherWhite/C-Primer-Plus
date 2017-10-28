#pragma c9x on
#ifndef _QUEUE_H_
#define _QUEUE_H_
#include <stdlib.h>
#include <stdbool.h>

// typedef struct contact_information
// {
//   int student_id;
//   char name;
//   int telephone_number;
// }Item;
typedef struct item
{
  long arrive;
  int processtime;
}Item;

typedef struct node
{
  Item item;
  struct node *next;
}Node;

typedef struct queue
{
  Node *front;//指向列队首的指针
  Node *rear;//指向列队尾的指针
  int items;
}Queue;
void InitializeQueue(Queue *pq);
bool QueueIsFull(const Queue *pq);
bool QueueIsEmpty(const Queue *pq);
int QueueItemCount(const Queue *pq);
bool EnQueue(Item item,Queue *pq);
bool DeQueue(Item *pitem,Queue *pq);
void EmptyTheQueue(Queue *pq);
#endif
