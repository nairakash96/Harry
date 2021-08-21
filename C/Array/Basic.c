#include <stdio.h>
#include <conio.h>

int main()
{
    int n, a[n];
    printf("\nEnter no of Students ");
    scanf("%d", &n);
    printf("\nEnter Marks of Students\n\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter Marks of Student %d-->", i + 1);
        scanf("%d", &a[i]);
    }
    printf("\nYou have Entered\n");
    for (int i = 0; i < n; i++)
    {
        printf("\nMarks of Student %d is %d", i + 1, a[i]);
    }
    return 0;
}