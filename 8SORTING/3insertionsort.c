#include<stdio.h>
int main(){

    int arr[5]={4,1,3,28,19};
    int n=5;

   // insertion sort
    for(int i=1;i<=n-1;i++){  // n-1 passes
        int j = i;
        while(j>=1 && arr[j] < arr[j-1]){
             int temp = arr[j];
             arr[j] = arr[j-1];
             arr[j-1] = temp;
             j--;
        }
    }

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

return 0;
}