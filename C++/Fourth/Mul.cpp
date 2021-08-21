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
        for (int i = 0; i < 10; i++)
        {
            cout << n << " X " << i + 1 << " = " << n * (i + 1) << endl;
        }
        cout << "Do You want to continue Y/N ";
        cin >> ch;
    } while ((ch == 'Y') || (ch == 'y'));
    return 0;
}