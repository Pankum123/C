#include<stdio.h>
void reverse(int arr[],int n){
    for(int i=0,j=n-1;i<j;i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
        return;
}
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    reverse(arr,7);
    for(int i=0;i<7;i++){
        printf("%d ",arr[i]);
    }
return 0;
}