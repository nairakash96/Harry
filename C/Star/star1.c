#include<stdio.h>
#include<conio.h>
int star(int);
int main(){
    int n;
    printf("\nEnter value of N ");
    scanf("%d",&n);
    star(n);
     return 0;
}
int star(int a){
   if(a==1){
       printf(" * \n");
       return;
   }
    star(a-1);
    for(int i=0;i<(2*a-1);i++){
        printf(" * ");
    }
    printf("\n");
}