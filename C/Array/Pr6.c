#include <stdio.h>
#include <conio.h>
int sumPos(int arr[], int n);
int sumNeg(int arr[], int n);
int main()
{
    int a[] = {1, 2, 8, 6, -8, -9, -10, -55, -89, -8}, p, n;
    p = sumPos(a, 10);
    printf("\nSum of positive int %d", p);
    n = sumNeg(a, 10);
    printf("\nSum of Negative int %d", n);
    return 0;
}
int sumPos(int arr[], int n)
{
    int a = 0, sm = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            a++;
            sm += arr[i];
        }
    }
    printf("\nNo of positive int %d", a);
    return (sm);
}
int sumNeg(int arr[], int n)
{
    int a = 0, sm = 0, i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            a++;
            sm += arr[i];
        }
    }
    printf("\nNo of Negative int %d", a);
    return (sm);
}