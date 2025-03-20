#include<stdio.h>
int main(){

    int n;
    printf("enter a number : ");
    scanf("%d",&n);

    int original = n;
    int reverse = 0;
    int rem=0;
    while(n>0){
        rem = n%10;
        reverse = reverse*10 + rem;
        n = n / 10;
    }

    printf("original number = %d\n",original);
    printf("reverse number = %d\n",reverse);

    if(original == reverse){
        printf("number is palindrome ");
    }
    else
     printf("number is not palindrome ");

return 0;
}