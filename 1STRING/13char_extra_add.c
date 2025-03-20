#include<stdio.h>
int main(){

    char str[]="college";
    printf("%s\n",str);
    for(int i=7;i>=2;i--){
        str[i+1]=str[i];
    }
    str[2]='k';
    printf("%s\n",str);

return 0;
}