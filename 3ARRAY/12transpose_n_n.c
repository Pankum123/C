#include<stdio.h>
int main(){

    int arr[3][3];
    int n=3;
    printf("enter all the element\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
/*
    //transpose 
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            //swap arr[i][j] and arr[j][i]
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }    
    }
*/
    //transpose 
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            //swap arr[i][j] and arr[j][i]
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }    
    }

    //output
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

return 0;
}