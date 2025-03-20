#include<stdio.h>
int main(){

    enum Bool {False,True}var; // local scope & automaticly initialized by the compiler
    var = True;
    printf("%d",var);

return 0;
}