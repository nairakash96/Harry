#include<stdio.h>
#include<conio.h>

int main(){
    int n;
    printf("\nEnter value of n ");
    scanf("%d",&n);
    printf("\nTables of %d",n);
    for(int i=1;i<=10;i++){
        printf("\n%d x %d = %d",n,i,n*i);
    }
    printf("\n\nTables of 10 in reverse");
    for(int i=10;i>0;i--){
        printf("\n10 x %d = %d",i,10*i);
    }
     return 0;
}