#include<stdio.h>
int main(){

    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    int a=1;
    int b=1;
    printf("%d %d ",a,b);
    int sum = 0;
    for(int i=1;i<=n-2;i++){
        sum=a+b;
        a=b;
        b=sum;
        printf("%d ",sum);
    }
    printf("\nThe %dth fibonacci is %d",n,sum);
return 0;
}