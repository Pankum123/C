#include<stdio.h>
int main(){

    // all enum constant must be unique in their scope
    enum point1 {x = 34, y = 2,z = 0}; 
    enum point2 {x = 4,p =25,q = 1,}; 
    printf("%d %d %d %d %d",x,y,z,p,q);
return 0;
}