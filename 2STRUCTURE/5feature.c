#include<stdio.h>
#include<string.h>
int main(){

    typedef struct book{
    char name[20];
    int nofpage;
    float price;
    }book;

    book a,b;

    a.nofpage=100;
    a.price=411.5;
    strcpy(a.name,"secret seven");

    printf("%d\n",a.nofpage);
    printf("%f\n",a.price);
    printf("%s\n",a.name);

    // b.nofpage=a.nofpage;
    // b.price=a.price;
    // strcpy(b.name,a.name);

    // property 
    b=a;    //deep copy

    printf("%d\n",b.nofpage);
    printf("%f\n",b.price);
    printf("%s\n",b.name);


// WRONG IF(A==B)
    // if(a==b){
    //     printf("dono same hai");
    // }




return 0;
}