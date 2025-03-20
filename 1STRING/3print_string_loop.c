#include<stdio.h>
int main(){

    char str[]="college walla";
    char *ptr=str;
    
    //using str
    int i=0;
    while(str[i]!='\0'){
        printf("%c",str[i]);
        i++;
    }

    printf("\n");

    //using ptr
     i=0;
    while(ptr[i]!='\0'){
        printf("%c",ptr[i]);
        i++;
    }

    printf("\n");

    //using ptr whit dreference(*)
    while(*ptr!='\0'){
        printf("%c",*ptr);
        ptr++;
    }

return 0;
}