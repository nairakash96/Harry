//Prime no using while loop
#include <iostream>

using namespace std;

int main()
{
    int n, i = 2, prime = 1;
    ;
    cout << "Enter value of N ";
    cin >> n;
    while(i<n)
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
        i++;
    }
    if (prime == 0&&n!=2)
        cout << "Not Prime " << endl;
    else
        cout << "Prime " << endl;
    prime = 1;
    return 0;
}