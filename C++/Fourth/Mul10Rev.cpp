//Multiple of n in reverse
#include <iostream>

using namespace std;

int main()
{
    int n;
    char ch;
    do
    {
        cout << "Enter a number ";
        cin >> n;
        for (int i = 10; i >= 1; i--)
        {
            cout << n << " X " << i << " = " << n *i << endl;
        }
        cout << "Do You want to continue Y/N ";
        cin >> ch;
    } while ((ch == 'Y') || (ch == 'y'));
    return 0;
}