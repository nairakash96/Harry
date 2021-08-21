#include <stdio.h>
#include <conio.h>

int main()
{
    int a;
    printf("\nEnter Value of N\n");
    scanf("%d", &a);
    printf("\nFirst %d natural numbers are\n", a);
    for (int i = 0; i <= a; i++)
    {
        printf("%d\n", i);
    }
    printf("\nFirst %d natural numbers in reverse are\n", a);
    for (int i = a; i >= 0; i--)
    {
        printf("%d\n", i);
    }

    return 0;
}