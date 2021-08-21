#include<stdio.h>
#include<conio.h>

int main(){
    int year;
    printf("\nEnter an year\n");
    scanf("%d",&year);
    if(year%4==0)
    printf("\nIts Leap Year");
    else
    printf("\nIts Not Leap Year");
     return 0;
}