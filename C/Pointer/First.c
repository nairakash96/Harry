#include<stdio.h>
#include<conio.h>

int main(){
    int a=6;
    int *ptr;
    ptr=&a;
    printf("\nThe address of a is %u",&a);
    printf("\nThe value of ptr is %d",ptr);
    printf("\nThe value at ptr  is %d",*ptr);
     return 0;
}