#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    cout << "Enter four no" << endl;
    cin >> a >> b >> c >> d;
    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                cout << "A is Larger Number";
            }
            else
            {
                cout << "D is Larger Number";
            }
        }
    }
    else if (b > c)
    {
        if (b > d)
        {
            cout << "B is Larger Number";
        }
        else
        {
            cout << "D is Larger Number";
        }
    }
    else if (c > d)
    {
        cout << "C is Larger Number";
    }
    else
    {
        cout << "D is Larger Number";
    }
    return 0;
}