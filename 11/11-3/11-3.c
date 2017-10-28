#include <stdio.h>
#include <ctype.h>
void first_word(char *);
int main(void){
    char word[100];
    printf("请输入一段话\n");
    gets(word);
    first_word(word);
    puts(word);
    return 0;
}

void first_word(char *word){
    int count = 0,n = 0;
    for(count = 0;isspace(*(word + count));count++)
        continue;
    for(n = 0;!isspace(*(word + count));n++){
        *(word + n) = *(word + count);
            count++;
    }
    *(word + n) = '\0';
    return;
}
