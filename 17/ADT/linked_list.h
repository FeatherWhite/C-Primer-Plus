#ifndef LINKED_LIST_H_
#define LINKED_LIST_H_
#include <stdbool.h>

typedef struct contact_information
{
  int student_id;//不使用数组，结构占用的空间少
  char name;
  int telephone_number;
}Item;//item项目

typedef struct node
{
  Item item;
  struct node *next;
}Node;

typedef Node * List;
/*操作:初始化一个列表*/
/*操作前:plist指向一个列表*/
/*操作后:指向的列表被初始化为空列表*/
void InitializeList(List * plist);
/*操作:判断列表是否为空*/
/*操作前:plist指向一个已初始化的列表*/
/*操作后:列表为空返回true否则返回false*/
bool ListIsEmpty(const List * plist);
/*操作:判断列表是否为空*/
/*操作前:plist指向一个已初始化的列表*/
/*操作前:列表已满返回true否则返回false*/
bool ListIsFull(const List * plist);
/*操作:确定列表中项目的个数*/
/*操作前:plist指向一个已初始化的列表*/
/*操作后:返回列表中项目的个数*/
unsigned int ListItemCount(const List * plist);
/*操作:在列表尾部添加一个项目*/
/*操作前:item是要被增加到列表中的每个项目*/
/*plist指向一个已初始化的列表*/
/*操作后:可能的话在列表尾部添加一个新项目*/
/*成功返回true失败返回falsh*/
bool AddItem(Item itom,List * plist);
/*操作:把一个函数作用于列表中的每个项目*/
/*操作前:plist指向一个已初始化的列表*/
/*pfun指向一个函数，该函数接收一个*/
/*Item参数并且无返回值           */
/*操作后:pfun指向的函数被作用到*/
/*列表中的每个项目一次*/
void Traverse(const List * plist,void (*pfun)(Item item));//traverse 穿过
/*操作:释放已分配的内存(如果有)*/
/*操作前:plist指向一个已初始化的列表*/
/*操作后:为该列表分配的内存已被释放*/
/*并且该列表被置为空列表*/
void EmptyTheList(List * plist);
/*打开文件并读取文件*/
FILE * Openfile(char *filename);
#endif
