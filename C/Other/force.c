#include<stdio.h>
#include<conio.h>
float force(float);
int main(){
    float m;
    printf("\nEnter mass of body in Kgs  ");
    scanf("%f",&m);
    printf("\nMass of body in Kgs %.3f",m);
    printf("\nForce of attraction on body is Newton %.3f N",force(m));
     return 0;
}

float force(float a){
    return a*9.8;
}