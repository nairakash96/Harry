//factorial using while loop
#include<iostream>

using namespace std;

int main(){
    int n,res=1;
    cout<<"Enter value of n ";
    cin>>n;
while(n>0){
    res*=n;
    n--;
}
 cout << "Factorial of " << n << " is " << res << endl;
    return 0;
}