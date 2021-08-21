#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    ptr=(int*)malloc(10*sizeof(int));
     printf("\n7 Table till 10");
    for(int i=0;i<10;i++){
        ptr[i]=7*(i+1);
        printf("\n7 x %d =%d ",i+1,ptr[i]);
    }
 ptr=realloc(ptr,15*sizeof(int));
 printf("\n\n7 Table till 15");
    for(int i=0;i<15;i++){
        ptr[i]=7*(i+1);
        printf("\n7 x %d =%d ",i+1,ptr[i]);
    }

     return 0;
}