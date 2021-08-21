#include <stdio.h>
#include <conio.h>
int fact(int);
int main()
{
    int n, f;
    printf("\nEnter value on n\n");
    scanf("%d", &n);
    printf("\nFactorial of %d id %d", n, fact(n));
    return 0;
}
int fact(int a)
{
    if (a == 0 || a == 1)
        return 1;
    else
        return a * fact(a - 1);
}