#include<stdio.h>
int main(){

    char *ptr="physics walla";
    // ptr[0]='m';      //error
    // *ptr[0]='k';    //error
    printf("%s\n",ptr);
    //printf("%s\n",*ptr);    //error
    printf("%c\n",*ptr);
    ptr++;
    printf("%c\n",*ptr);
    printf("%s\n",ptr);

return 0;
}