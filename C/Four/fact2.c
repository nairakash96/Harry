#include <stdio.h>
#include <conio.h>

int main()
{
    int n, res, i = 1;
    printf("\nEnter value of n ");
    scanf("%d", &n);
    res = n;
    while (i < n)
    {
        res *= i;
        i++;
    }
    printf("Factorial of %d is %d", n, res);
    return 0;
}