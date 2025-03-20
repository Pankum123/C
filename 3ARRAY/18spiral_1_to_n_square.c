#include<stdio.h>
int main(){

     int m;
     printf("enter no of row of 1st array :");
     scanf("%d",&m);
     int n;
     printf("enter no of column of 1st array :");
     scanf("%d",&n);

     int a[m][n];
     int p=1;

     //spiral print
     printf("\n");

     int minr=0;
     int maxr=m-1;
     int minc=0;
     int maxc=n-1;   
     int tne=m*n;
     int count=0;

     while(count<tne){
        //print the minimum row
        for(int j=minc;j<=maxc && count<tne;j++){
            printf("%d",a[minr][j]=p++);
            count++;
        }
        minr++;
        // if(count>=tne) break;
        //print max column
        for(int i=minr;i<=maxr && count<tne;i++){
            printf("%d",a[i][maxc]=p++);
            count++;
        }
        maxc--;
        //  if(count>=tne) break;
        //print the maximum row
        for(int j=maxc;j>=minc && count<tne;j--){
            printf("%d",a[maxr][j]=p++);
            count++;
        }
        maxr--;
        //  if(count>=tne) break;
        //print minimum column
        for(int i=maxr;i>=minr && count<tne;i--){
            printf("%d",a[i][minc]=p++);
            count++;
        }
        minc++;
        //  if(count>=tne) break;
    }  

 
return 0;
}