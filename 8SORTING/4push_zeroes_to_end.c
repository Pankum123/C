#include<stdio.h>
int main(){


    int arr[10]={0,2,0,7,0,0,6,0,7,0};
    int n=10;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-1;j++){
            if(arr[j]==0){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

return 0;
} 