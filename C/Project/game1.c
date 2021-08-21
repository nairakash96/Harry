#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num, gusses, attempt = 1;
    srand(time(0));
    num = rand() % 100 + 1;
    // printf("\n%d", num);
    do
    {
        printf("\nEnter number between 1 to 100\n");
        scanf("%d", &gusses);
        if (gusses > num)
        {
            printf("\nLower No Please\n");
        }
        else if (gusses < num)
        {
            printf("\nHigher No Please\n");
        }
        else
        {
            printf("\nYou have gussed in %d ", attempt);
        }
        attempt++;
    } while (gusses != num);
    getch();
    return 0;
}