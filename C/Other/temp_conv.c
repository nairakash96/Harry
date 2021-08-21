#include<stdio.h>
#include<conio.h>
float tempconv(int);
int main(){
    int a;
    float f;
    printf("\nEnter value of temp\n");
    scanf("%d",&a);
    printf("\nTemp in Degree Celcius is %d C ",a);
    f=tempconv(a);
    printf("\nTemp in Degree Farinite is %f F ",f);
     return 0;
}
float tempconv(int a){
    return (a*9/5)+32;
}