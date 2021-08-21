//Sum of N natural no
#include<iostream>
int sum(int);
using namespace std;

int main(){
    int n,sm;
    cout<<"Enter value of n ";
    cin>>n;
    sm=sum(n);
    cout<<"Sum of first "<<n<<" natural no is "<<sm;
    return 0;
}
int sum(int a){
    int sm=0,i;
    for(i=0;i<=a;i++){
        sm+=i;
    }
    return sm;
}