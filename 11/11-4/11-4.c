#include <stdio.h>
void find_char(char (*),char);
int main(void){
    char ch[100],search;
    int count = 0;
    printf("请输入字符串\n");
    while((ch[count] = getchar()) != '\n'){
        count++;
    }
    printf("请输入要查找的字符\n");
    search = getchar();
    find_char(ch,search);
    return 0;
}

void find_char(char *ch,char search){
    int count = 0;
    for (;*(ch + count) != search;count++);
        if(*(ch) == search)
        printf("指针为:%p\n",(ch + count));
    else
        printf("%p",NULL);
}
