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
    // 1 2 3
    // 4 5 6
    // 7 8 9

    //transpose 
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            //swap arr[i][j] and arr[j][i]
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }    
    }
    // 1 4 7
    // 2 5 8
    // 3 6 9

    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    //rotate (reverse each row)

    for(int i=0;i<n;i++){
        int j=0;
        int k=n-1;
        while(j<k){
           //swap arr[i][j] and arr[i][k]
            int temp=arr[i][j];
            arr[i][j]=arr[i][k];
            arr[i][k]=temp;  
            j++;
            k--;
        }
    }
    // 7 4 1
    // 8 5 2
    // 9 6 3

    printf("\n");

    //output
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

return 0;
}