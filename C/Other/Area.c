#include<stdio.h>
#include<conio.h>
#include<math.h>
int area(int);
int main(){
    int side,ar;
    printf("Enter value of side\n");
    scanf("%d",&side);
    ar=area(side);
    printf("Area of square is %d",ar);
    return 0;
}
int area(int a){
    return (int)pow(a,2);
}