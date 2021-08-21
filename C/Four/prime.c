#include <stdio.h>
#include <conio.h>

int main()
{
    int n, prime = 1;
    printf("\nEnter a number to check\n");
    scanf("%d", &n);
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime == 0)
        printf("\nNumber is not prime");
    else
        printf("\nNumber is prime");
    return 0;
}