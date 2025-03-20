#include<stdio.h>
#include<string.h>
int main(){

/*
typedef struct book{
    char name[20];
    int nofpage;
    float price;
}pw;

pw d;
pw a;
*/

typedef struct book{
    char name[20];
    int nofpage;
    float price;
}book;

book a;
book b,c,d;

    a.nofpage=100;
    a.price=411.5;
    strcpy(a.name,"secret seven");

    printf("%d\n",a.nofpage);
    printf("%f\n",a.price);
    printf("%s\n",a.name);


 

return 0;
}