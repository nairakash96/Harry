#include <stdio.h>
#include <conio.h>
int main()
{
    int l, b, area;
    printf("Enter Value of Length\n");
    scanf("%d", &l);
    printf("\nEnter Value of Breadth\n");
    scanf("%d", &b);
    area = l * b;
    printf("\nArea of rectangle is %d", area);
    return 0;
    getch();
}