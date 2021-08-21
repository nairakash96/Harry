//Program for temp conversion Cel --> Fer
#include<iostream>
float temp(float);
using namespace std;

int main(){
    float cel,fer;
cout<<"Enter Temperature in Celcius ";
cin>>cel;
cout<<"Temperature in Celcius "<<cel<<endl;
fer=temp(cel);
cout<<"Temperature in Ferhnite "<<fer;
    return 0;
}
float temp(float a){
    int f;
    f=(a*9/5)+32;
    return f;
}