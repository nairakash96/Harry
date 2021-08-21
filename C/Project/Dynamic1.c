#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *)malloc(5 * sizeof(int));
    printf("\nMalloc");
    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter value of %d element:\t", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter value of %d element:\t%d", i, ptr[i]);
    }

    ptr = realloc(ptr, 10 * sizeof(int));
    printf("\nRealloc");
    for (int i = 0; i < 10; i++)
    {
        printf("\nEnter value of %d element:\t", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("\nEnter value of %d element:\t%d", i, ptr[i]);
    }
    return 0;
}