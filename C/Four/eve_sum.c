#include <stdio.h>
#include <conio.h>

int main()
{
    int n, odsum = 0, evsum = 0;
    printf("\n Enter value of n -->");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            odsum += i;
        }
        else
        {
            evsum += i;
        }
    }
    printf("\nSum of first %d odd number is %d \n",n,odsum);
    printf("\nSum of first %d even number is %d \n",n,evsum);
    if(odsum>evsum)
    printf("\nDiff of first %d odd and even no is %d \n",n,odsum-evsum);
    else
    printf("\nDiff of first %d odd and even no is %d \n",n,evsum-odsum);
    printf("\nAddition of first %d odd and even no is %d \n",n,evsum+odsum);
    printf("\nProduct of first %d odd and even no is %d \n",n,evsum*odsum);
    return 0;
}