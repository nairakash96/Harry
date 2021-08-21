#include <iostream>

using namespace std;

int main()
{
    char a, ch;
    do
    {
        cout << "Enter a charecter " << endl;
        cin >> a;
        if (a >= 97 && a <= 122)
            cout << "Lower Case "<<endl;
        else
            cout << "Not Lower case " << endl;
        cout << "Do You want to Continue ";
        cin >> ch;
    } while ((ch == 'Y') || (ch == 'y'));
    return 0;
}