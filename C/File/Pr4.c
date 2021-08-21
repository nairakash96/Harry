#include <stdio.h>
#include <conio.h>
struct emplyee
{
    char name[30];
    int id;
};
int main()
{
    struct emplyee comp[10], *pt;
    pt = &comp;
    FILE *ptr1;
    ptr1 = fopen("id.txt", "w");

    for (int i = 0; i < 2; i++)
    {
        printf("\nEnter id of employee %d ", i + 1);
        scanf("%d", &pt->id);
        printf("\nEnter Name of employee %d ", i + 1);
        scanf("%s", &pt->name);
        fprintf(ptr1, "\n%s\t%d ", pt->name, pt->id);
        pt++;
        //fprintf(ptr1, "%d ",comp[i].id);
    }
    fclose(ptr1);

    return 0;
}