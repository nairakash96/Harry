#include<stdio.h>
#include<conio.h>

int main(){
    float inc,tax=0;
    printf("\nEnter your annual income in Lac\n");
    scanf("%f",&inc);
    if(inc>=1000000)
    tax=tax+0.3*(inc-1000000);
    else if(inc>=500000 && inc<1000000)
    tax=tax+0.2*(inc-500000);
    else if(inc>=250000 && inc<500000)
   tax=tax+0.05*(inc-250000);
    else
    printf("\n You are exempted from tax");
    
    printf("\nYour Tax is %f",tax);
     return 0;
}