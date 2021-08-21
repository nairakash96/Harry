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
    for(int i=0;i<=a;i++){
            for(int j=0;j<i;j++){
          printf(" /```><```\\ ");
      }
      printf("\n");
  }
}