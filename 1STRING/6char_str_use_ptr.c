#include<stdio.h>
int main(){

    char str[]="college walla";
    char *ptr=str;
    printf("%s\n",str);
    printf("%s\n",ptr);

    ptr="physics walla";

    printf("%s\n",str);
    printf("%s\n",ptr);

    printf("\n");

    char str1[]="pankaj kumar";
    char* ptr1=str1;
    printf("%s\n",str1);
    *ptr1='m';
    printf("%s\n",str1);

return 0;
}