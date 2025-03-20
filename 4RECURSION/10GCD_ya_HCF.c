#include<stdio.h>

int HCF(int a,int b){
    
   if(b%a==0) return a;

    return HCF(b%a,a);
}
   
   

int main(){

    int a,b;
    printf("enter two number :");
    scanf("%d%d",&a,&b);
    
    int result =  HCF(a,b);

    printf("HCF of a and b is = %d",result);

return 0;
}