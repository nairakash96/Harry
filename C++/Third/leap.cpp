#include<iostream>

using namespace std;

int main(){
    int y,c;

do
{
    cout<<"Enter a year ";
cin>>y;
if(y%4==0)
cout<<"Its a leap Year "<<endl;
else
cout<<"Its not Leap Year "<<endl;
cout<<"Do you want to continue 1/0 -->";
cin>>c;
}while(c==1);
    return 0;
}