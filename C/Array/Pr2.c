#include<stdio.h>
#include<conio.h>

int main(){
    int a[]={1,2,3,4};
    
   if(*(a+2)==a[2])
   printf("\nSame");
   else
   printf("\nDifferent");
     return 0;
}