#include <stdio.h>
#include <conio.h>

int main()
{
    FILE *ptr;
    int num1=45;
    // ptr = fopen("Sample2.txt", "r");
    // char c=fgetc(ptr);
    // printf("\nThe value of my Charector is %c\n",fgetc(ptr));
    // printf("\nThe value of my Charector is %c\n",fgetc(ptr));
    // printf("\nThe value of my Charector is %c\n",fgetc(ptr));
    // printf("\nThe value of my Charector is %c\n",fgetc(ptr));
    // printf("\nThe value of my Charector is %c\n",fgetc(ptr));
    // printf("\nThe value of my Charector is %c\n",fgetc(ptr));
ptr = fopen("Demo.txt", "w");
putc('c',ptr);
putc('c',ptr);
putc('c',ptr);
fclose(ptr);
    return 0;
}