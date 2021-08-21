#include<stdio.h>
#include<conio.h>

int main(){
    int a,i=0;
     printf("Enter Value of a\n");
     scanf("%d",&a);
     do{
     printf("%d\t",i+1);
     i++;
     }
     while(i<a);
    return 0;

    
}