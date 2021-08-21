#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int r,h;
    float a,v,pi=3.142;
    cout<<"Enter radious of circle  ";
    cin>>r;
    a=pi*pow(r,2);
    cout<<"Area of circle is "<<a<<endl;
    cout<<"Enter value of hight  ";
    cin>>h;
    v=a*h;
    cout<<"Volume of cylinder is "<<v<<endl;
    return 0;
}