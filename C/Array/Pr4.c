#include<stdio.h>
#include<conio.h>

int main(){
    int n,a[n],i,m;
    printf("\nEnter value of N ");
    scanf("%d",&n);
    printf("\nEnter value of M ");
    scanf("%d",&m);
    for(i=1;i<=n;i++){
        a[i]=m*i;
    }
    for(i=1;i<=n;i++)
    printf("\na[%d]= %d",i,a[i]);
     return 0;
}