//Factorial of n
#include <iostream>

using namespace std;

int main()
{
    int n, res;
    char ch;
    do
    {

        cout << "Enter value of N ";
        cin >> n;
        res = 1;
        for (int i = n; i > 0; i--)
        {
            res *= i;
        }
        cout << "Factorial of " << n << " is " << res << endl;

        cout << "Do you want to Continue (Y/N)? ";
        cin >> ch;

    } while ((ch == 'Y') || (ch == 'y'));
    return 0;
}