#include <stdio.h>
#include<stdlib.h>//exit()的原型
int main(int argc,char *argv[]){
    int ch;
    FILE *fp;//文件指针
    int count = 0;
    if (argc != 2){//argc通过空格计算字符串的个数
        printf("用法:%s加文件名\n",argv[0]);
        exit(1);//关闭所有打开的文件并终止程序;
    }
    if ((fp = fopen(argv[1],"r")) == NULL){
        printf("不能打开文件%s\n",argv[1]);
        exit(1);
    }
    while ((ch = getc(fp)) != EOF){
        putc(ch,stdout);
        count++;
    }
    fclose(fp);
    printf("文件%s的字数是%d\n",argv[1],count);
    return 0;
}
