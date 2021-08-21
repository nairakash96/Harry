#include <stdio.h>
#include <conio.h>

int main()
{
    int r, c, a[5][5], i, j;
    printf("\nEnter value No of Row ");
    scanf("%d", &r);
    printf("\nEnter value No of Column ");
    scanf("%d", &c);
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("\nEnter Values of row %d and column %d ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nMatrix Element are\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("\ta[%d][%d]=%d ", i + 1, j + 1, a[i][j]);
        }
        printf("\n");
    }
    return 0;
}