#include<stdio.h>
#include<conio.h>

int main(){
    FILE *ptr,*ptr2;
    int num;
    ptr=fopen("Akash.txt","r");
    fscanf(ptr,"%d",&num);
    printf("\nBefore num=%d",num);
    num=num*2;
    printf("\nAfter num=%d",num);
    ptr=fopen("Akash.txt","w");
    fprintf(ptr,"%d\t",num);
    fclose(ptr);
     return 0;
}