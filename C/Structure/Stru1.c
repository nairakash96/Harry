#include <stdio.h>
#include <conio.h>
struct employee
{
    int code;
    float salary;
    char name[100];
};
int main()
{
    int i, n;
    struct employee e[100];
    printf("\nEnter No of employee ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter Details of employee %d\n", i + 1);
        printf("Enter Code of employee %d ", i + 1);
        scanf("%d", &e[i].code);
        printf("Enter salary of employee %d ", i + 1);
        scanf("%f", &e[i].salary);
        printf("Enter name of employee %d ", i + 1);
        scanf("%s", &e[i].name);
    }
    for (int i = 0; i < n; i++)
    {
        printf("\nDetails of employee %d \n", i + 1);
        printf("\nCode of employee %d is %d ", i + 1, e[i].code);
        printf("\nSalary of employee %d is %f ", i + 1, e[i].salary);
        printf("\nName of employee %d is %s ", i + 1, e[i].name);
    }
   // printf("Size of employee %d",sizeof(e[2]));
    return 0;
}