#include <stdio.h>
#include <conio.h>

int main()
{
    int i, f, l, count = 0;
    printf("\nEnter first and last No\n");
    scanf("%d%d", &f, &l);
    for (i = f; i <= l; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\t", i);
            count++;
        }
    }
    printf("\ncount = %d", count);
    return 0;
}