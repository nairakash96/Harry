#include <stdio.h>
#include <conio.h>
typedef struct date
{
    int day;
    int month;
    int year;
} dt;
void display(dt d)
{
    printf("\nYour Date is %d/%d/%d", d.day, d.month, d.year);
}
int dtcomp(dt d1, dt d2)
{
    if (d1.year > d2.year) //Decision based on year comparision
    {
        return d1.year - d2.year;
    }
    if (d1.year < d2.year)
    {
        return d2.year - d1.year;
    }
    if (d1.month > d2.month) //Decision based on month comparision
    {
        return d1.month - d2.month;
    }
    if (d1.month < d2.month)
    {
        return d2.month - d1.month;
    }
    if (d1.day > d2.day) //Decision based on date comparision
    {
        return d1.day - d2.day;
    }
    if (d1.day < d2.day)
    {
        return d2.day - d1.day;
    }
    return 0;
}
int main()
{
    dt d1 = {13, 03, 1996};
    dt d2 = {8, 01, 1998};
    int a;
    display(d1);
    display(d2);
    a = dtcomp(d1, d2);
    printf("\nDate Comparision %d", a);
    return 0;
}