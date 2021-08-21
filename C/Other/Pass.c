#include <stdio.h>
#include <conio.h>

int main()
{
    int p, m, c, total;
    printf("\nEnter marks of Physic --> ");
    scanf("%d", &p);
    printf("\nEnter marks of Maths --> ");
    scanf("%d", &m);
    printf("\nEnter marks of Chemistry --> ");
    scanf("%d", &c);
    total = (p + m + c) / 3;
    if (total < 40 || p < 33 || m < 33 || c < 33)
        printf("\nYour percentage is %d and you fail", total);
    else
        printf("\nYour percentage is %d and you pass", total);
    return 0;
}