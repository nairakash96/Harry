#include<iostream>
using namespace std;
class complex;
class calc{
	public:
	int SumReal(complex,complex);
};	
class complex{
	int a,b;
	friend class calc;
	public:
		void set(){
			cout<<"Enter value of a & b"<<endl;
			cin>>a>>b;
			}
		void display(){
			cout<<endl<<a<<" + "<<b<<"i"<<endl;
		}
};

int calc::SumReal(complex o1,complex o2){
		return (o1.a + o2.a);
	}

int main(){
	complex c1,c2;
	calc c;
	int res;
	c1.set();
	c1.display();
	c2.set();
	c2.display();
	res=c.SumReal(c1,c2);
	cout<<"\nThe sum of real part is "<<res;
}
