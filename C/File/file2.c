#include <stdio.h>
#include <conio.h>

int main()
{
    FILE *ptr;
    int num1,num2,num3;
    ptr = fopen("Sample.txt", "r");
    fscanf(ptr,"%d",&num1);
    fscanf(ptr,"%d",&num2);
    fscanf(ptr,"%d",&num3);
    fclose(ptr);
    printf("The Value of num is %d\n",num1);
    printf("The Value of num is %d\n",num2);
    printf("The Value of num is %d\n",num3);

    return 0;
}