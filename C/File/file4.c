#include <stdio.h>
#include <conio.h>

int main()
{
    FILE *ptr;
    int num1=45;
    ptr = fopen("Sample2.txt", "w");
    fprintf(ptr,"The Value of num is %d\n", num1);
    fprintf(ptr,"The Value of num2 is %d\n", num1+1);
    fclose(ptr);
    return 0;
}