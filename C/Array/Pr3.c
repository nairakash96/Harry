#include<stdio.h>
#include<conio.h>

int main(){
    int a[11],i;
    for(i=1;i<=10;i++){
        a[i]=5*i;
    }
    for(i=1;i<=10;i++)
    printf("\na[%d]=%d",i,a[i]);
     return 0;
}