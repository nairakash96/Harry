#include <stdio.h>
#include <conio.h>

int main()
{
    FILE *ptr;
    int a;
    char ch, sl;
    do
    {
        printf("\nEnter no for multiplication ");
        scanf("%d", &a);
        ptr = fopen("Table.txt", "w");
        fprintf(ptr, "Multiplication Table of %d\n", a);
        for (int i = 0; i < 10; i++)
        {
            fprintf(ptr, "%d x %d = %d\n", a, i + 1, a * (i + 1));
        }
        printf("\nSuccefully generated table of %d",a);
        fclose(ptr);
        printf("\nDo you want to continue Y/N ");
        scanf("%c", &ch);
        scanf("%c", &sl);

    } while ((sl == 'Y') || (sl == 'y'));
    return 0;
}