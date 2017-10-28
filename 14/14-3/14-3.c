/*修改程序清单l4.2中的书目列表程序，使它首先按照输入的顺序输出图书的描述，然后按照标题的字母升序输出图书的描述，最后按照value值的升序输出图书的描述。*/
#include <stdio.h>
#define MAXTITL 40/*图书题目最多可输入的字符数*/
#define MAXAUL 40 /*作者名字最多可输入的字符数*/
#define MAXBKS 100 /*最多可容纳的图书册数*/
struct book {
	char title[MAXTITL];
	char author[MAXAUL];
	float value;
};
int main(void) {
	struct book library[MAXBKS];
	int count = 0;
	int index;

	printf()
}
