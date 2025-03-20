// #include<stdio.h>
// int main(){
//     int max = __INT_MAX__;
//     printf("%d\n",max);
// return 0;
// }

#include<stdio.h>
#include<limits.h>
int main(){

    int min=INT_MIN; //sabse chhota number
    int max=INT_MAX; //sabse bada nmber
    printf("min value of int = %d\n",min);
    printf("max value of int = %d\n",max);

    long min1=LONG_MIN; //sabse chhota number
    long max1=LONG_MAX; //sabse bada nmber
    printf("min value of long = %ld\n",min1);
    printf("max value of long = %ld\n",max1);


    
return 0;
}