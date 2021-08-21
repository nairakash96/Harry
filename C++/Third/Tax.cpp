#include <iostream>

using namespace std;

int main()
{
    int sal, tax = 0;
    cout << "Enter your salary ";
    cin >> sal;
    if (sal >= 1000000)
    {
        tax = 0.3 * (sal - 1000000);
        cout << "Your Tax=" << tax;
    }
    else if (sal >= 500000 && sal < 1000000)
    {
        tax = 0.2 * (sal - 500000);
        cout << "Your Tax=" << tax;
    }
    else if (sal >= 250000 && sal <= 500000)
    {
        tax = 0.05 * (sal - 250000);
        cout << "Your Tax=" << tax;
    }
    else
    {
        cout << "Your Tax=" << tax;
    }

    return 0;
}