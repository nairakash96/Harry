#include <stdio.h>
#include <conio.h>
int main()
{
    int r, h;
    float pi = 3.142, area, Volume;
    printf("\nEnter value of Radius\t");
    scanf("%d", &r);
    area = pi * r * r;
    printf("\nArea of circle is %f cm^2\n", area);
    printf("\nEnter value of hight\t");
    scanf("%d", &h);
    Volume = pi * r * r * h;
    printf("\nThe volume of cylinder is %f cm^3\n", Volume);
    return 0;
}