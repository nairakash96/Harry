#include <stdio.h>
#include <conio.h>
int fab(int);
int main()
{
    int n, c = 0,i;
    printf("\nEnter value of n ");
    scanf("%d", &n);
    printf("\nFibonasi series\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d ", fab(c));
        c++;
    }
    return 0;
}
int fab(int a)
{
    if (a == 0)
        return 0;
    else if (a == 1)
        return 1;
    else
        return fab(a - 1) + fab(a - 2);
}
