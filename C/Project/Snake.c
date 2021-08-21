#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
int SWG(char, char);
int main()
{
    srand(time(0));
    int num, res,ch,sel;
	num = rand() % 100 + 1;
    char comp, you;
    if (num < 33)
        comp = 's';
    else if (num > 33 && num < 66)
        comp = 'w';
    else
        comp = 'g';

    printf("\nEnter Your choise:\n");
    printf("\nSnake--> S\tWater--> W\tGun--> G\n");
    scanf("%c", &you);
    res = SWG(you, comp);
    printf("\nYou choose %c and Computer choose %c", you, comp);
    if (res == 0)
    {
        printf("\nGame Draw");
    }
    else if (res == 1)
    {
        printf("\nYou Won");
    }
    else
    {
        printf("\nYou Loose");
    }
    getch();
    return 0;
}
int SWG(char a, char b)
{
    if (a == b)
    {
        return 0;
    }

    if (a == 's' && b == 'g')
    {
        return -1;
    }
    else if (a == 'g' && b == 's')
    {
        return 1;
    }

    if (a == 'w' && b == 's')
    {
        return -1;
    }
    else if (a == 's' && b == 'w')
    {
        return 1;
    }

    if (a == 'g' && b == 'w')
    {
        return -1;
    }
    else if (a == 'w' && b == 'g')
    {
        return 1;
    }
}
