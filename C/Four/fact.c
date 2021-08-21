#include<stdio.h>
#include<conio.h>

int main(){
    int n,res;
    printf("\nEnter value of n");
    scanf("%d",&n);
    res=n;
    for(int i=n-1;i>0;i--){
    res*=i;
    }
    printf("Factorial of %d is %d",n,res);
     return 0;
}