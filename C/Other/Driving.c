#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b;
    printf("\nEnter age of Person");
    scanf("%d", &a);
    if (a > 18)
    {
        printf("\nYou are elegible for Driiving License");
    }
    else
    {
        printf("You are not Elegible, Try after %d years", 18 - a);
    }
    return 0;
}