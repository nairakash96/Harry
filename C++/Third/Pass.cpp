#include<iostream>

using namespace std;

int main(){
    int m1,m2,m3,sm;
 cout<<"Enter marks of three subject"<<endl;
 cin>>m1>>m2>>m3;
 sm=(m1+m2+m3)/3;
 if(sm>=40&&m1>33&&m2>33&&m3>33)
 cout<<"You Pass"<<endl<<"Percent = "<<sm<<endl;
 else
 cout<<"You Fail";   
    return 0;
}