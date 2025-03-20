#include<stdio.h>
int main(){

    int a,b;
    printf("enter two number : \n");
    scanf("%d %d",&a,&b);

    int power=1;
    for(int i=1;i<=b;i++){
        power = power*a;
    }
    printf("a to the power b (a^b) = %d",power);

return 0;
}