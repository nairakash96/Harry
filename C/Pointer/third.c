#include <stdio.h>
#include <conio.h>
void dec(int *a);
int main()
{
    int i = 4;
    printf("\nValue of i is %d", i);
    dec(&i);
    printf("\nValue of i is %d", i);
    return 0;
}
void dec(int *a)
{
    *a *= 10;
}