#include <stdio.h>
#include <conio.h>

int main()
{
    int a[10], *ptr;
    ptr = &a[0];
    ptr += 2;
    if (ptr == &a[2])
        printf("\nSame location in memory");
    else
        printf("\nDifferent location of memory");
    return 0;
}