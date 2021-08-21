#include <iostream>
using namespace std;
int main()
{
    int a, b, c, ch,n, i;
    char ch1,sel;
    cout << "Enter value of a and b ";
    cin >> a >> b;
    do{ 
    cout << "Enter your choise ";
    cout << "\n1.Add\n2.Sub\n3.Mul\n4.Div\n5.Fact\n___________\n";
    cin >> ch;
    switch (ch)
    {
    case 1:
        c = a + b;
        cout << "\nAddition of two Number is " << c;
        break;
    case 2:
        c = a - b;
        cout << "\nSubtraction of two Number is " << c;
        break;
    case 3:
        c = a * b;
        cout << "\nMultiplication of two Number is " << c;
        break;
    case 4:
        c=a/b;
        cout << "\nDivision of two Number is " <<c;
        break;
    case 5:
        cout << "\nEnter the value of n ";
        cin >> n;
        c = n;
        for (i = 1; i < n; i++)
        {
            c *= i;
        }
        cout << "\nFactroil of " << n << " is " << c;
        break;
    default:
        cout << "\nEnter Valide Choise ";
        break;
    }
     cout<<"\nDo you want to continue (Y/N)?\n";
    cin>>ch1;
   }while((ch1=='Y')||(ch1=='y'));
    return 0;
}
