#include<stdio.h>
#include<conio.h>

int main(){
    char ch;
    printf("\nEnter the charecter ");
    scanf("%c",&ch);
    if(ch<= 122 && ch>= 97)     //a=97 to z=122 ASCII Values for smaller case
    {
     printf("\nIts Lower case");
    }
    else
    {
    printf("\nIts not Lower case");
    }
     return 0;
}