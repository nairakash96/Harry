#include<iostream>

using namespace std;

int main(){
    float cel,fer;
    cout<<"Enter temperature in celcius ";
    cin>>cel;
    fer=(cel*9/5)+32;
     cout<<"Temperature in celcius is "<<cel<<" C"<<endl;
    cout<<"Temperature in fernite is "<<fer<<" F"<<endl;
    return 0;
}