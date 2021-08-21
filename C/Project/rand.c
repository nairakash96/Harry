#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num;
    srand(time(0));
    num = rand() % 100 + 1;
    printf("\n%d", num);

    return 0;
}