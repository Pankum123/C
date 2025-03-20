#include<stdio.h>
int main(){

    int a[3][2]={{1,2},{3,4},{5,6}};
    int b[2][4]={{1,2,3,4},{5,6,7,8}};
    int m=3,n=2;
    int p=2,q=4;
    int res[m][q];
   
    if(n!=p){
        printf("the matrices cannot be multiplied ");
    }
    else{
      
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                res[i][j]=0;
                // i row of a[][] , j column of b[][]
                // (a[i][0],a[i][1],a[i][2],.....) * (b[0][j],b[1][j ])
                for(int k=0;k<n;k++){
                    res[i][j]+=a[i][k]*b[k][j];
                }
            }
        }

    }
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }

return 0;
}