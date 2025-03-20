#include<stdio.h>
int main(){

    //only integral value are allowed

 //   enum point {x=34, y=2.5, z=0}; //error
    enum point {x=34, y, z=0}; 
    
    printf("%d %d %d ",x,y,z);
return 0;
}