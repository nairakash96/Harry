#include <stdio.h>
#include <conio.h>
void swap(int *a, int *b);
void Nswap(int a, int b);
int main()
{
    int a, b;
    printf("\nEnter values of a and b\n");
    scanf("%d%d", &a, &b);
    printf("\nValue before Swap is a=%d and b=%d", a, b);
    Nswap(a, b); //swaping dosen't happen as function call by value
    printf("\nValue after NSwap is a=%d and b=%d", a, b);
    swap(&a, &b); //swaping is performed as function call by referance
    printf("\nValue after  Swap is a=%d and b=%d", a, b);
    return 0;
}
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void Nswap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}