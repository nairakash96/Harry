//Sum of product of multiple of N
#include<iostream>

using namespace std;

int main(){
    int sm=0,i,n;
    cout<<"Enter value of n ";
    cin>>n;
    for(i=1;i<=10;i++){
        sm+=n*i;
    }
    cout<<"Sum = "<<sm;
    return 0;
}