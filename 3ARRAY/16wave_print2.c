#include<stdio.h>
int main(){

    int arr[4][3]={{1,2,3},{4,5,6},{7,8,9},{1,0,2}};
    int r=4,c=3;

    for(int i=0;i<c;i++){
        if(i%2==0)
        {
            for(int j=r-1;j>=0;j--){
            printf("%d ",arr[j][i]);
            }
        }
        else{
            for(int j=0;j<r;j++){
            printf("%d ",arr[j][i]);
            }
        }
      //  printf("\n"); 
    }

return 0;
}