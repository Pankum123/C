#include<stdio.h>
#include<string.h>
int main(){

    char str1[15];
    char *str2="kum";
    strcpy(str1,str2);
    printf("%s\n",str1);

     char ch[13];
   // ch2="secret seven";  //error
     strcpy(ch,"secret seven");
     printf("%s\n",ch);
return 0;
}