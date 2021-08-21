//Game Guess the No
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{

    srand(time(0));
    int n, t, guss, count = 1;
    n = rand() % 100 + 1;
    do
    {
        cout << "Enter a number between 1 to 100 " << endl;
        cin >> guss;
        if (guss > n)
            cout << "Lower Number Please " << endl;
        else if (guss < n)
            cout << "Higher Number Please " << endl;
        else
            cout << "You Gussed the no in " << count << " attempts ";
        count++;
    } while (guss != n);
    getch();
    return 0;
}
