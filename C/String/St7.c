#include <stdio.h>
#include <conio.h>
void Strcp(char[], char[]);
int main()
{
    char ab[] = "Akash", cd[40];
    printf("\nCD before %c", cd);
    Strcp(cd, ab);
    printf("\nCD After %s", cd);
    return 0;
}
void Strcp(char tr[], char sr[])
{
    int c = 0;
    while (sr[c] != '\0')
    {
        tr[c] = sr[c];
        c++;
    }
    tr[c] = '\0';
}