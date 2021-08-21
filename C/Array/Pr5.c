#include<stdio.h>
#include<conio.h>
void rev(int *a,int n);
int main(){
    int a[]={1,2,3,4,5,6,7};
    printf("\nBefore Swap\n");
     for(int i=0;i<7;i++)
    printf("a[%d]=%d\t",i,a[i]);
    rev(a,7);
    printf("\nAfter Swap\n");
    for(int i=0;i<7;i++)
    printf("a[%d]=%d\t",i,a[i]);
     return 0;
}
void rev(int *arr,int n){
    int temp;
    n=7;
     for(int i=0;i<(n/2);i++){
         temp=arr[i];
         arr[i]=arr[n-i-1];
         arr[n-i-1]=temp;
     }
}