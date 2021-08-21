#include <stdio.h>
#include <conio.h>

int main()
{
    int a;
    printf("\nEnter value of A(Max Marks)");
    scanf("%d", &a);
    if (a >= 75)
    {
        printf("\nA Grade\n");
    }
    else if (a >= 65 && a <= 74)
    {
        printf("B Grade");
    }
    else if (a >= 55 && a <= 64)
    {
        printf("C Grade");
    }
    else if (a >= 45 && a <= 54)
    {
        printf("D Grade");
    }
    else
    {
        printf("Fail !!!!!");
    }
    return 0;
}