#include<stdio.h>
#include<string.h>
int main(){

    char *s1="raghav"; //read only
    char *s2="Garg";   //read only
    strcat(s1,s2); // no work
    printf("%s",s1);

return 0;
}