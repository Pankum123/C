#include<stdio.h>
#include<stdlib.h>
int main(){

    // free(pointer); jb pointer starting address ko point kar raha ho

    int* ptr = (int*) calloc(10,4);
    int* p=ptr;
    ptr++;
    free(ptr);
    

return 0;
}