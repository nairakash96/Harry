#include<iostream>
using namespace std;
class A{
		int a,b;
	public:
		void set(){
			cout<<"Enter value of a"<<endl;
			cin>>a;
			cout<<"Enter value of b"<<endl;
			cin>>b;
		}
		void sum();
		void mul();
};
void A::sum(){
	cout<<a<<"+"<<b<<"="<<a+b<<endl;
}
void A::mul(){
	cout<<a<<"*"<<b<<"="<<a*b<<endl;
}
int main(){
	A x;
	x.set();
	x.sum();
	x.mul();
	return 0;
}
