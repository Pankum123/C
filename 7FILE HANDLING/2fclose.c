#include<stdio.h>
int main(){

    FILE* ptr = fopen("CW.txt","w");
    char str[] = "palacement lagegi yahi se hi";
    fputs(str,ptr);
    fclose(ptr);

return 0;
}