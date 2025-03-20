#include<stdio.h>
int main(){

    int arr[4][3]={{1,2,3},{4,5,6},{7,8,9},{1,0,2}};
    int r=4,c=3;

    for(int i=0;i<r;i++){
        if(i%2==0)
        {
            for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
            }
        }
        else{
            for(int j=c-1;j>=0;j--){
            printf("%d ",arr[i][j]);
            }
        }
      //  printf("\n"); 
    }

return 0;
}