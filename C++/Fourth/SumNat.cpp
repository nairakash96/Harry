//Sum of N natural No
#include<iostream>

using namespace std;

int main(){
    int sm=0,i=0,n;
    cout<<"Enter value of n ";
    cin>>n;
   do{
        sm+=i;
        i++;
    }while(i<=n);
    cout<<"Sum="<<sm<<endl; 
    return 0;
}