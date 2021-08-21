#include <stdio.h>
#include <conio.h>

int main()
{
    int i, f, l,n,count = 0;
    printf("\nEnter first and last No\n");
    scanf("%d%d", &f, &l);
    printf("\nEnter Number for Divisiblity Check\n");
    scanf("%d",&n);
    printf("\n Following numbers are divisible by %d from %d to %d\n", n,f,l);
    for (i = f; i <= l; i++)
    {
        if (i % n == 0)
        {
            printf("%d ", i);
           
            count++;
        }
    }
    printf("\nTotal %d are divisible", count);
    return 0;
}