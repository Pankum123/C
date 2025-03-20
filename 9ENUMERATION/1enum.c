#include<stdio.h>

enum Bool{
    False,True
};

//or
//enum Bool {False,Right};

int main(){

    enum Bool var;
    var = True;
    printf("%d",var);
    
return 0;
}