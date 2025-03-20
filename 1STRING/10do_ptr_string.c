#include<stdio.h>
int main(){

    char *s1="physics walla";
    char *s2=s1;                //valid
    s2="college walla";
    printf("%s\n",s1);
    printf("%s\n",s2);

return 0;
}