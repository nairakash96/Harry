#include <stdio.h>
#include <conio.h>
void strln(char *st);
int main()
{
    char ab[] = "Akash";
    strln(ab); 
    return 0;
}

void strln(char *st){
char *ptr = st;
    int count = 0;
    while (*ptr != '\0')
    {
        count++;
        ptr++;
    }
    printf("String Length = %d ", count);
}