#include <stdio.h>
#include <conio.h>
void printTable(int *arr, int c);
int main()
{
    int a[3][10];
    printf("\nMultiplication Table of 2");
    printTable(a[0], 2);
    printf("\nMultiplication Table of 3");
    printTable(a[1], 3);
    printf("\nMultiplication Table of 7");
    printTable(a[2], 7);
    return 0;
}
void printTable(int *arr, int c)
{
    int i;
    for (i = 1; i <=10; i++)
    {
        arr[i]= c * i;
    }
    for (i = 1; i <=10; i++)
    {
        printf("\n%d",arr[i]);
    }
}