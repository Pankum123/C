#include<stdio.h>
int main(){

     char str1[]="pankaj kumar";
    // printf("%s\n",str1); // pankaj kumar

     char str2[20];
    // printf("enter a string\n");
    // scanf("%s",str2); //don't use &  i/p - pankaj kumar
    // printf("%s\n",str2); // pankaj

     char str3[20];
    printf("enter a string\n");
    scanf("%[^\n]s",str3); //don't use &  i/p - pankaj kumar
    printf("%s\n",str3); // pankaj kumar

    char str4[40];
    //printf("enter a string\n");
    // gets(str4); // use nahi karo                   pankaj kumar
    // puts(str4); //     pankaj kumar
    // printf("%s",str4);                      //     pankaj kumar

    char str5[40];
    // printf("enter a string\n");        
    // gets(str5);                        //  pankaj kumar
    // puts("how are you");               //  how are you
       // \n apne man se add karta hai
    // puts(str5);                        //  pankaj kumar

    char str6[40];
    // printf("enter a string\n");        
    // gets(str6);                 //    pankaj kumar
    // printf("how are you ");     //    how are you pankaj kumar
    // puts(str6);

return 0;
}