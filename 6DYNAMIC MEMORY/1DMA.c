#include<stdio.h>
#include<stdlib.h>
int main(){

    // int n; // 4 bytes
    // printf("enter array's size : ");
    // scanf("%d",&n);
    // int arr[n];// n*4
    
    // for(int i=0;i<n;i++){
    //     scanf("%d",&arr[i]);
    // }

    // for(int i=0;i<n;i++){
    //     printf("%d ",arr[i]);
    // }

    int* ptr = (int*) malloc(10*sizeof(int)); //bydefault gerbage value se initilized
    //int* ptr = (int*) malloc(10*4);
    printf("%d\n",*ptr);
    ptr++;
    printf("%d\n",*ptr);
    ptr++;
    printf("%d\n",*ptr);
    ptr++;
    printf("%d\n",*ptr);

    printf("\n");

    int* ptr1 = (int*) calloc(10,sizeof(int)); //bydefault 0 value se initilized
    printf("%d\n",*ptr1);
    ptr1++;
    printf("%d\n",*ptr1);
    ptr1++;
    printf("%d\n",*ptr1);
    ptr1++;
    printf("%d\n",*ptr1);


return 0;
}