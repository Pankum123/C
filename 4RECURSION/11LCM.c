#include<stdio.h>

int LCM(int a,int b){
    
    static int m = 0;
    m = m + b;
    if(m%a==0 && m%b==0) return m;
    return LCM(a,b);
}
   
   

int main(){

    int a,b;
    printf("enter two number :");
    scanf("%d%d",&a,&b);
    
    int result =  LCM(a,b);

    printf("LCM of a and b is = %d",result);

return 0;
}