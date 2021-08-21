#include <stdio.h>
#include <conio.h>
void sumAndavg(int a, int b, int *sum, float *avg);
int main()
{
    int a, b, sum;
    float avg;
    printf("\nEnter two numbers ");
    scanf("%d%d", &a, &b);
    sumAndavg(a, b, &sum, &avg);
    printf("\nSum=%d\nAvg=%.3f", sum, avg);
    return 0;
}

void sumAndavg(int a, int b, int *sum, float *avg)
{
    *sum = a + b;
    *avg = (float)(*sum) / 2;
}