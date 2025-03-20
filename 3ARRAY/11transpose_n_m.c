#include<stdio.h>
int main(){

    int arr[2][3];
    int r=2,c=3;
    printf("enter all the element\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }

/*
    printf("\n");
     for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
         printf("%d ",arr[j][i]);   
        }
        printf("\n");
    }
*/

    //store in other array
    int brr[c][r];
    printf("\n");
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
           // printf("%d ",arr[j][i]);
           brr[i][j]=arr[j][i];
        }
    }
    //printing brr
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
           printf("%d ",brr[i][j]);
          
        }
        printf("\n");
    }

return 0;
}