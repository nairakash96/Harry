#include <stdio.h>
#include <conio.h>

int main()
{
    int sum = 0, i;
    for (i = 1; i <= 10; i++)
    {
        sum = sum + 8 * i;
    }
    printf("\nThe sum of product of 8 is %d", sum);
    return 0;
}