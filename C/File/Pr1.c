#include<stdio.h>
#include<conio.h>

int main(){
    FILE *ptr;
    int a,b,c;
    ptr=fopen("Sample.txt","r");
    fscanf(ptr,"\n%d %d %d",&a,&b,&c);
    printf("The values of a=%d,b=%d and c=%d",a,b,c);
     return 0;
}