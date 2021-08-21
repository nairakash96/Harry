#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b, c, d;
    printf("\nEnter four numbers\n");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
                printf("%d is Greatest of all numbers ", a);
            else
                printf("%d is Greatest of all numbers ", d);
        }
    }
    else if (b > c)
    {
        if (b > d)
            printf("%d is Greatest of all numbers ", b);
        else
            printf("%d is Greatest of all numbers ", d);
    }
    else if (c > d)
        printf("%d is Greatest of all numbers ", c);
    else
        printf("%d is Greatest of all numbers ", d);
    return 0;
}