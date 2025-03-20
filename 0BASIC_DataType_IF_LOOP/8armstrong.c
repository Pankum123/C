#include<stdio.h>
#include<math.h>
int main(){

    int number;
    printf("enter a number : ");
    scanf("%d",&number);

    // find no of digit
    int n=number;
    int count=0;
    while(n>0){
        count++;
        n=n/10;
    }
    printf("no of digit = %d\n",count);

    //armstrong
    n=number;
    int rem=0;
    int sum=0;
    while(n){
        rem=n%10;
        sum=sum+pow(rem,count);
        n=n/10;
    }
    if(number==sum){
        printf("%d is armstrong",number);
    }
    else{
        printf("%d is not armstrong",number);
    }
return 0;
}