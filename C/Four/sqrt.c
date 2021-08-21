#include <stdio.h>
#include <conio.h>

int main()
{
    int n, sqrt = 0, i;
    printf("\n Enter a number\n");
    scanf("%d", &n);
    for (i = 2; i < n; i++)
    {
        if (n % i == 0 && n / i == i)
            sqrt = 1;
    }
    if (sqrt == 1)
        printf("%d is a perfect square\n", n);
    else
        printf("%d is not a perfect square\n", n);
    return 0;
}