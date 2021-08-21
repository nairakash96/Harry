//Fibonachi Series
#include <iostream>

using namespace std;
int feb(int);
int main()
{
    int n, c = 0;
    cout << "Enter no of Elements ";
    cin >> n;
    cout << "Febonice Series " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << " " << feb(c);
        c++;
    }
    return 0;
}
int feb(int a)
{
    if (a == 0)
        return 1;
    else if (a == 1)
        return 1;
    else
        return feb(a - 1) + feb(a - 2);
}