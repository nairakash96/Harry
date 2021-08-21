//Force of atteraction on body
#include<iostream>

using namespace std;
float force(float );
int main(){
    float m,f;
    cout<<"Enter mass of body in Kg ";
    cin>>m;
f=force(m);
cout<<"Mass of body is "<<m<<" Kg "<<endl;
cout<<"Force of atteraction on body is "<<f<<" N "<<endl;
    return 0;
}
float force(float a){
    float f,g=9.8;
    f=a*g;
    return f;
}