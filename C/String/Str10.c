#include <stdio.h>
#include <conio.h>
int occ(char[], char);
int main()
{
    char ab[] = "akash", a;
    printf("\nEnter Char to be searched ");
    scanf("%c", &a);
    int c = occ(ab, a);
    printf("\nOccurance = %d", c);
    return 0;
}
int occ(char c[], char a)
{
    char *ptr = c;
    int count = 0;
    while (*ptr != '\0')
    {
        if (*ptr == a)
        {
            count++;
        }
        ptr++;
    }
    return count;
}