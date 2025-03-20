#include<stdio.h>
#include<math.h>
int main(){

    printf("armstrong number 1 to 1000 \n");

    for(int i=1;i<=1000;i++){
       
        //no of digit
        int n=i;
        int count=0;
        while(n>0){
            count++;
            n=n/10;
        }

        n=i;
        int rem=0;
        int sum=0;
        while(n>0){
            rem=n%10;
            sum=sum+pow(rem,count);
            n=n/10;
        }
        if(sum==i)
        printf("%d ",i);
    }

return 0;
}