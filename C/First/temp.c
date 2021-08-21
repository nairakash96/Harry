#include<stdio.h>
#include<conio.h>

int main(){
    float c,f;
    printf("Enter the temperature in celius\t");
    scanf("%f",&c);
    f=(c*9/5)+32;
    printf("\n Temperature in ferinate for %f celicus is %f",c,f);
    return 0;
}