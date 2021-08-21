#include<stdio.h>
#include<conio.h>
int sum(int);
int main(){
    int n;
    printf("\nEnter Value of N ");
    scanf("%d",&n);
    printf("\nSum of First %d natural no is %d",n,sum(n));
     return 0;
}
int sum(int a){
    int s=0,i;
    for(i=0;i<=a;i++)
    s+=i;
    return s;
}