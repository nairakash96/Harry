#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter  a number ";
    cin>>n;
    if(n%97==0)
    cout<<"The number is divisible by 97"<<endl<<"The number is multiple of 97 by "<<n/97;
    else
    cout<<"The number is not divisible by 97";
    return 0;
}