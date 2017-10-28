#include <stdio.h>
float get_float(void);
int main(void){
    char ch;
    float num1,num2;
        printf("Enter the operation of your choice:\n");
        printf("a.add\t\t\ts.subtract\n");
        printf("m.multiply\t\td.divide\n");
        printf("q.quit\n");
    while((ch = getchar()) != 'q'){
        printf("Enter first number:");
        num1 = get_float();
        printf("Enter second number:");
        num2 = get_float();
        switch(ch){
            case 'a':printf("两者之和%f\n",num1 + num2);
                     break;
            case 's':printf("两者之差%f\n",num1 - num2);
                     break;
            case 'm':printf("两者之积%f\n",num1 * num2);
                     break;
            case 'd':printf("两者之商%f\n",num1 / num2);
                     break;
        }
        printf("Enter the operation of your choice:\n");
        printf("a.add\t\t\ts.subtract\n");
        printf("m.multiply\t\td.divide\n");
        printf("q.quit\n");
     }
}

float get_float(void){
    float num;
    while(scanf("%f",&num) != 1)
    printf("请输入数字\n");
    while(getchar() != '\n');
    return num;
}

