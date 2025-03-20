#include<stdio.h>
int main(){

    enum point {y = 2, x = 34, t, z = 0}; // value = prevoius + 1
    printf("%d %d %d %d",x,y,z,t);
return 0;
}