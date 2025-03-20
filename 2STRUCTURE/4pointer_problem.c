#include<stdio.h>
typedef int* int_pointer;
int main(){

/*
    int x=5,y=7;
    int* a=&x,b=&y;   // int* x  and int y
    printf("%p\n",a);
    printf("%p\n",b);
*/   

/*
    int x=5,y=7;
    int* a=&x,b=y;
    printf("%p\n",a);
    printf("%d\n",b);
*/

/*
    int x=5,y=7;
    int* x,y;   // int* x  and int y
    printf("%p\n",x);
    printf("%p\n",y);
*/   

    int x=5,y=7;
    int_pointer a=&x,b=&y;  // int* x and int y
    printf("%p\n",a);
    printf("%p\n",b);

return 0;
}