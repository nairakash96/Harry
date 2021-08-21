#include<stdio.h>
#include<conio.h>

int main(){
    int i=6,*j,**k;
    j=&i;
    k=&j;
    printf("\nValue of i using *j is %d",*j);
     printf("\nValue of i using **k is %d",**k);
     return 0;
}