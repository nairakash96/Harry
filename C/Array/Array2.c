#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num, n, a[n];
    srand(time(0));
    printf("\nEnter Size of Array\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        num = rand() % 100 + 1;
        a[i] = num;
        printf("\na[%d]=%d ", i, a[i]);
    }
    getch();
    return 0;
    
}