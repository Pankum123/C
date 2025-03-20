#include<stdio.h>
int main(){
   char arr1[]={'h','e','l','l','o',' ','w','o','r','l','d'}; //character array ,size=11
   char arr2[]="hello world"; //string (computer last mai '\0' add kar deta hai) ,size=12
   //no of character in arr1 = no of character in arr2 = 11
   printf("size of arr1 = %d\n",sizeof(arr1)); // 11
   printf("size of arr2 = %d\n",sizeof(arr2)); // 12 

   char arr3[6]="pankaj"; //not vallid
  // printf("%s",arr3);

   //pointer string
   char* ptr1="hello world";
   printf("size of ptr1 = %d\n",sizeof(ptr1)); //4
   char* ptr2="hello world kaise ho";
   printf("size of ptr2 = %d\n",sizeof(ptr2)); //4
   //pointer ka size compiler per depend karta hai 
   //pointer ka size fix hota hai
return 0;
}