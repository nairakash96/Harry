#include<iostream>
using namespace std;
class Y;
class Z;
class X{
	int a;
	friend class Z;
	public:
		void set(){
			cout<<"Enter value of a ";
			cin>>a;
		}
};
class Y{
	int b;
	friend class Z;
	public:
		void set(){
			cout<<"Enter value of b ";
			cin>>b;
		}
};
class Z{
	public:
		int sum(X ,Y);
};

int Z:: sum(X op1,Y op2){
			int c;
			c=op1.a + op2.b;
			cout<<"Sum of two is "<<c;
			//return c;
		}

int main(){
X x;
Y y;
Z z;
x.set();
y.set();
z.sum(x,y);
}
