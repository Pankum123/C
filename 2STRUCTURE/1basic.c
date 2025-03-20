#include<stdio.h>
#include<string.h>
int main(){

    struct book{
        char name[20];
        int nofpage;
        float price;
    }a,b,c;

    struct book d;
    struct book e,f;

    a.nofpage=100;
    a.price=411.5;
    strcpy(a.name,"secret seven");

    printf("%d\n",a.nofpage);
    printf("%f\n",a.price);
    printf("%s\n",a.name);

    d.nofpage=200;
    d.price=511.5;
    strcpy(d.name,"secret seven star");

    printf("%d\n",d.nofpage);
    printf("%f\n",d.price);
    printf("%s\n",d.name);

return 0;
}