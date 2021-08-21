#include <stdio.h>
#include <conio.h>
void prt(int a);
void abc(int *p);
int main()
{
    int i = 4;
    printf("\nAddress of i is %u", &i);
    prt(i);
    abc(&i);
    return 0;
}
void prt(int a)
{
    printf("\nAddress of p is %u", &a);
}
void abc(int *a)
{
    printf("\nAddress of r is %u", a);
}