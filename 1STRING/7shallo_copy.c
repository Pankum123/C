#include<stdio.h>
int main(){

    char s1[]="physics walla";
    char *s2=s1;
    s1[0]='m';
    printf("%s\n",s1); //shallow copy not another string
    printf("%s\n",s1);

return 0;
}