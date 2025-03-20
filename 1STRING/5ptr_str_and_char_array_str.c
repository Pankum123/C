#include<stdio.h>
int main(){

    char str[]="college walla";
   // str="physics walla";       //error
    str[0]='m';                  //valid
    printf("%s\n",str);

    char *ptr="college walla";
   // ptr[0]='m';                 //invalid
    ptr="physics walla";           //valid
     printf("%s\n",ptr);
return 0;
}