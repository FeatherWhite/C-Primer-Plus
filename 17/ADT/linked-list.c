#include "linked_list.h"
#include <memwatch.h>
#include <stdio.h>
#include <stdlib.h>
static void CopyToNode(Item item, Node *pnode);
/*接口函数把列表置为空列表*/
void InitializeList(List *plist) { *plist = NULL; }
/*列表为空返回真*/
bool ListIsEmpty(const List *plist) {
  if (*plist == NULL)
    return true;
  else
    return false;
}
/*列表已满返回真*/
bool ListIsFull(const List *plist) {
  Node *pt;
  bool full;
  pt = (Node *)malloc(sizeof(Node));
  if (pt == NULL)
    full = true;
  else
    full = false;
  free(pt);
  return full;
}
/*返回节点数*/
unsigned int ListItemCount(const List *plist) {
  unsigned int count = 0;
  Node *pnode = *plist;
  while (pnode != NULL) {
    pnode = pnode->next;
    count = count + 1;
  }
  return count;
}
/*创建存放项目的节点并把它添加到由plist指向的列表*/
bool AddItem(Item item, List *plist) {
  Node *pnew;
  Node *scan = *plist;
  pnew = (Node *)malloc(sizeof(Node));
  if (pnew == NULL)
    return false; //失败时退出函数
  CopyToNode(item, pnew);
  pnew->next = NULL;
  if (scan == NULL)
    *plist = pnew;
  else {
    while (scan->next != NULL)
      scan = scan->next;
    scan->next = pnew;
  }
  return true;
}
/*访问每个节点并对他们分别执行pfun指向的函数*/
void Traverse(const List *plist, void (*pfun)(Item item)) {
  Node *pnode = *plist;
  while (pnode != NULL) {
    (*pfun)(pnode->item);
    pnode = pnode->next;
  }
}
/*释放由malloc()分配的内存*/
/*列表指针设置为空*/
void EmptyTheList(List *plist) {
  Node *psave;
  while (*plist != NULL) {
    psave = (*plist)->next;
    free(*plist);
    *plist = psave;
  }
}
/*打开文件并读取文件*/
FILE *Openfile(char *filename) {
  FILE *fp;
  if ((fp = fopen(filename, "r")) == NULL) {
    fprintf(stderr, "Can't open this file\n");
    exit(1);
  }
  return fp;
}
/*局部函数定义,把一个项目复制到一个节点中*/
static void CopyToNode(Item item, Node *pnode) {
  pnode->item = item; //复制结构
}
