#include<stdio.h>
int main(){

    int arr[10]={1,2,3,4,5,8,10,9,6};

    int sum = 0;
    for(int i = 1;i <= 10 ; i++){
        sum = sum + i - arr[i-1];
    }

    printf("%d",sum);

return 0;
}