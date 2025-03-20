#include<stdio.h>
int main(){
    
    enum point {x=0, y=0, z=0}; 
    //x++;
    //each emumerator is a constant so updation is not allow
    printf("%d %d %d ",x,y,z);
return 0;
}