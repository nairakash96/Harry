#include<iostream>

using namespace std;
float avg(int,int,int);
int main(){
    int a,b,c;
    float av;
    cout<<"Enter values of three No "<<endl;
    cin>>a>>b>>c;
av=avg(a,b,c);
cout<<"The average of three no is "<<av;
    return 0;
}
float avg(int a,int b,int c){
    float sm,av;
    sm=a+b+c;
    av=sm/3.0;
    return av;
}