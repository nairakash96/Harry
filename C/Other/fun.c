#include<stdio.h>
#include<conio.h>
void display();
int main(){
    int t;
    printf("Enter value of time\n");
    scanf("%d",&t);
    if(t>12)
    display();
    else
    printf("\nIts Morning");
     return 0;
}
void display(){
    printf("\nIts Afternoon");
}