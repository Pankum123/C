#include<stdio.h>
int main(){

    //what is type casting

    printf("int se char\n");
    int x=65;
    printf("%d\n",x);
    char ch=(char)x;
    printf("%c\n",ch);


    printf("char se int\n");
    char ch2 = 'A';
    printf("%c\n",ch2);
    int x2 = (int)ch2;
    printf("%d\n",x2);

    printf("int se float\n");
    int x3=65;
    printf("%d\n",x3);
    float f1=(float)x3;
    printf("%f\n",f1);

    printf("float se int\n");
    float f2=65.0;
    printf("%f\n",f2);
    int x4=(int)f2;
    printf("%d\n",x4);

return 0;
}