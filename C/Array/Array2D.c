#include <stdio.h>
#include <conio.h>

int main()
{
    int r, c, a[20][20];
    printf("\nEnter value No of Row ");
    scanf("%d", &r);
    printf("\nEnter value No of Column ");
    scanf("%d", &c);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("\nEnter Values of row %d and column %d ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("\ta[%d][%d]=%d ", i + 1, j + 1, a[i][j]);
        }
        printf("\n");
    }
    return 0;
}