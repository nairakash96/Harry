#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char a[20], b[20], c[20];
    printf("\nEnter Your first string\n");
    gets(a);
    printf("\nEnter Your second string\n");
    gets(b);
    printf("\nYour two strings are %s & %s", a, b);
    printf("\nString Length of string 1-->%s is %d\n", a, strlen(a));
    printf("\nString Length of string 2-->%s is %d\n", b, strlen(b));
    printf("\nString Comparision--> b=a? %d\n", strcmp(a, b));
    strcpy(c, b);
    printf("\nString Copy--> b-->c %s\n", c);
    printf("\nString Concatation--> b-->a %s\n", strcat(a, b));
    return 0;
}