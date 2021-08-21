#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b, c, n, ch,res;
    char ch1,sel;
    printf("\nEnter value of a and b\n");
    scanf("%d%d", &a, &b);
    do{
    printf("\nSelect operation");
    printf("\n1.ADDITION\n2.SUBTRACTION\n3.MULTIPLICATION\n4.DIVISION\n5.FACTORIAL\n");
    printf("\nEnter Your choice  ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        c = a + b;
        printf("\nAddition of two Number is %d", c);
        break;
    case 2:
        c = a - b;
        printf("\nSubtraction of two Number is %d", c);
        break;
    case 3:
        c = a * b;
        printf("\nMultiplication of two Number is %d", c);
        break;
    case 4:
        c = a / b;
        printf("\nDivision of two Number is %d", c);
        break;
    case 5:
        printf("\nEnter the value of n -->");
        scanf("%d", &n);
        res = n;
        for (int i = n - 1; i > 0; i--)
        {
            res *=   i;
        }
        printf("\nFactroil of %d is %d", n,res);
        break;
    default:
        printf("\nEnter Valide Choise");
    }
    printf("\nDo you want to continue (Y/N)?\n");
  scanf("%c",&sel);
    scanf("%c",&ch1);
    }while((ch1=='y')||(ch1=='Y'));
    return 0;
}