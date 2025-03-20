#include<stdio.h>
#include<stdbool.h>
int main(){

    int arr[5]={4,1,3,28,19};
    int n=5;

    //bubble sort

    for(int i=0;i<n-1;i++){   // n-1 passes
        bool flag = true;  //array is not sorted yet
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
               int temp = arr[j];
               arr[j] = arr[j+1];
               arr[j+1] = temp;
               flag = false;
            }
        }
        if(flag==true) break;
    }

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

return 0;
}