#include <stdio.h>
#include <conio.h>
void slice(char *sl, int m, int n);
int main()
{
    char ab[] = "Akash Nair";
    slice(ab, 0, 4);
    printf("%s", ab);
    return 0;
}
void slice(char *sl, int m, int n)
{
    int i = 0;
    while ((m + i) < n)
    {
        sl[i] = sl[i + m];
        i++;
    }
    sl[i] = '\0';
}