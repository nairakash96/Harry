#include<stdio.h>
#include<conio.h>

int main(){
    int p,n,i;
    float r;
    printf("Enter the principle ammount\t");
    scanf("%d",&p);
    printf("\nEnter Rate of intrest\t");
    scanf("%f",&r);
    printf("\nEnter number of years\t");
    scanf("%d",&n);
    i=p*r*n/100;
    printf("\n Intrest =%d Rupee",i);
    printf("\n Final Amount=%d Rupee",p+i);
     return 0;
     getch();
}