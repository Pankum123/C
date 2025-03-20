#include<stdio.h>
int main(){

    char s1[]="physics walla";
    char s2[]="physics walla"; //deep copy

    printf("%p\n",s1);
    printf("%p\n",s2);
return 0;
}