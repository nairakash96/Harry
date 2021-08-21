#include <stdio.h>
#include <conio.h>

int main()
{
    char str[] = "Akash Nair", abc[40];
    char *ptr = str;
    while (*ptr != '\0')
    {
        printf("\nThe name of Person is %c ", *ptr);
        ptr++;
    }
    printf("\nEnter name of person ");
    scanf("%s", abc); //& --> is not used for string
    printf("\nThe name of Person is %s ", abc);
    printf("\nThe name of Person is %s ", str);
    return 0;
}