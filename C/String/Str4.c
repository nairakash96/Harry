#include <stdio.h>
#include <conio.h>

int main()
{
    char ab[34], cd[34], c;
    int i = 0;
    printf("\nEnter First String ");
    scanf("%s", ab);
    printf("\nYou have entered %s ", ab);
    // printf("\nC--->%c",c);
    printf("\nEnter Second String ");
    while (c != '\n')
    {                  //Run while loop until enter key is pressed
        fflush(stdin); //flush out previous input
        scanf("%c", &c);
        cd[i] = c;
        i++;
    }
    cd[i-1] = '\0';
    printf("\nYou have entered %s ", cd);
    return 0;
}