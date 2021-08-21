#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
    char str[30];
    int count=0;
    printf("\nEnter your string ");
    gets(str);
    printf("\nThe length of your string'%s' is %d",str,strlen(str));
     return 0;
}