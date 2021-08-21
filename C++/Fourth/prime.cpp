//To check if prime or not
#include <iostream>

using namespace std;

int main()
{
    int n, prime = 1;
    char ch;
    do
    {
        cout << "Enter a number ";
        cin >> n;
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                prime = 0;
                break;
            }
        }
        if (prime == 0&&n!=2)
            cout << "Not Prime " << endl;
        else
            cout << "Prime " << endl;
        prime = 1;
        cout << "Do You Want to Continue (Y/N)?  ";
        cin >> ch;
    } while ((ch == 'Y') || (ch == 'y'));
    return 0;
}