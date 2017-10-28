#include <stdio.h>
#include <ctype.h>
int main(int argc,char *argv[]){
    char ch;
    if (argv[1][0] == '-')
        if(argv[1][1] == 'u')
        while((ch = getchar()) != EOF)
        putchar(toupper(ch));
        else if (argv[1][2] == 'l')
        while((ch = getchar()) != EOF)
        putchar(putchar(tolower(ch)));
        else if(argv[1][3] == 'p')
        while(ch = getchar() != EOF)
        putchar(ch);
        return 0;
}
