#include<stdio.h>
int main(){

    FILE* ptr = fopen("raghav.txt","r");
    char str[100];
    // if(fgets(str,100,ptr)!=NULL)    //single line
    //     printf("%s",str);

    // while(fgets(str,100,ptr)!=NULL)    //multiple line
    //     printf("%s",str);

     if(fgets(str,10,ptr)!=NULL)    //10 character
        printf("%s",str);

return 0;
}