#include<stdio.h>
// original number = reverse number ->palindrome
void palindrome(int arr[],int n){
    for(int i=0,j=n-1;i<j;i++,j--){
       if(arr[i]!=arr[j]){
            printf("palidrome not\n");
            return;
       } 
    }
        printf("palidrome yes\n");
        return;
       
}
int main(){
    int arr1[5]={1,2,3,2,1};
    palindrome(arr1,5);

    int arr2[6]={1,2,3,3,2,1};
    palindrome(arr2,6);

    int arr3[6]={1,2,3,4,2,1};
    palindrome(arr3,6);

  
    
return 0;
}