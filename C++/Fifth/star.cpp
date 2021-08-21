/* 
   *
   * * *
   * * * * * 
*/

#include<iostream>

using namespace std;

int main(){
    int i,j,n;
    cout<<"Enter no of elements ";
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<(2*i-1);j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}