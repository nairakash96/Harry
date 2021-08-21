#include <stdio.h>
#include <conio.h>

int main()
{
    int n,i=2,prime = 1;
    printf("\nEnter a number to check\n");
    scanf("%d", &n);
   do{
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
        i++;
    }while(i<n);
    if (prime == 0)
        printf("\nNumber is not prime");
    else
        printf("\nNumber is prime");
    return 0;
}