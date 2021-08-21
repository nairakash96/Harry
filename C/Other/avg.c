#include <stdio.h>
#include <conio.h>
float avg(int, int, int);
int main()
{
    int a, b, c;
    printf("\nEnter value of a,b and c\n");
    scanf("%d%d%d", &a, &b, &c);
    avg(a, b, c);
    printf("\n Averagae of three no is %f",avg(a, b, c));
    return 0;
}
float avg(int a, int b, int c)
{
    float s;
    s = (a + b + c) / 3.0;
    return s;
}