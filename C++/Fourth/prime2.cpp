//Prime no with do-while loop
#include <iostream>

using namespace std;

int main()
{
    int n, i = 2, prime = 1;
    ;
    cout << "Enter value of N ";
    cin >> n;
    do
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
        i++;
    } while (i < n);
    if (prime == 0&&n!=2)
        cout << "Not Prime " << endl;
    else
        cout << "Prime " << endl;
    prime = 1;
    return 0;
}