#include <stdio.h>
#include <conio.h>

int main()
{
    int a, r;
    printf("Enter value of a\t");
    scanf("%d", &a);
    r = a % 97;
    printf("Divisiblity if answer is zero--> %d",r);
    return 0;
}