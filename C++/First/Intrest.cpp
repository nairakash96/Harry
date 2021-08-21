#include<iostream>

using namespace std;

int main(){
    float p,r,t,I,A;
    cout<<"Enter Principle amount  ";
    cin>>p;
    cout<<"Enter intrest rate   ";
    cin>>r;
    cout<<"Enter Term (Years)  ";
    cin>>t;
    I=p*r*t/100;
    A=p+I;
    cout<<"Monthly = "<<I/12<<endl;
    cout<<"Intrest = "<<I<<endl<<"Final Amount = "<<A;
    return 0;
}