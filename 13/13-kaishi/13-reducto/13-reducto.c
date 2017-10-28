/*--------------压缩字符文件大小------------------*/
#include <stdio.h>
#include <stdlib.h>//调用exit()函数
#include <string.h>
int main(int argc,int *argv[]){
    FILE *in,*out;
    int string;//还是char
    char name[40];
    int count = 0;
    if (argc < 2){
        printf("用法: %s+文件名",argv[0]);
        exit(1);
    }
    if ( (in = fopen(argv[1],"r")) == NULL ){
        fprintf(stderr,"我不能打开\"%s\"文件\n",argv[1]);
        exit(2);
    }
    strcpy(name,argv[1]);
    strcat(name,".txt");
    if ( (out = fopen(name,"w")) == NULL ) {
        fprintf(stderr,"我不能创建文件\n");
        exit(3);
    }
    while( (string = getc(in)) != EOF ){
        if (count++ % 3 == 0)
            putc(string,out);
    }
    if (fclose(in) != 0 || fclose(out) != 0)
        fprintf(stderr,"关闭文件出现错误\n");
    return 0;
}
