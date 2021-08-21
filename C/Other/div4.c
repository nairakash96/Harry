#include <stdio.h>
#include <conio.h>

int main()
{
    int i, f, l, count = 0;
    printf("\nEnter first and last No\n");
    scanf("%d%d", &f, &l);
    printf("\n Following numbers are divisible by 4 from %d to %d\n", f, l);
    for (i = f; i <= l; i++)
    {
        if (i % 4 == 0)
        {
            printf("%d\t", i);
            count++;
        }
    }
    printf("\nTotal %d are divisible", count);
    return 0;
}