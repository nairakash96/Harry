#include <stdio.h>
#include <conio.h>

int main()
{
    char str[] = "Akash Nair", abc[40];
    char *ptr = str;
    printf("\nEnter name of person ");
    gets(abc);//To input multiple break string
    printf("\nThe name of Person is %s \n", abc);
    printf("\nThe name of Person is %s \n", str);
    puts(abc);//to print multiple break string
    return 0;
}