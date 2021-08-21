#include<iostream>
using namespace std;
class calc{
	int a,b;
	public:
		void set(){
			cout<<"Enter value of a & b"<<endl;
			cin>>a>>b;
			}
		void add();
		void sub();
		void mul();
		void div();
};

void calc::add(){
		cout<<"Sum="<<(a + b);
		//return 0;
	}
void calc::sub(){
		cout<<"Sub="<<(a - b);
	}

void calc::mul(){
	cout<<"Mul="<<(a * b);
	}

void calc::div(){
	cout<<"Div="<<(a/b);
	}
	
int main(){
	calc v;
	int ch,n;
	v.set();
	cout<<"Enter Your choise"<<endl;
	cout<<"1.Add\n2.Sub\n3.Mul\n4.Div"<<endl;
	cin>>ch;
	switch(ch){
		case 1: v.add();
				break;
		case 2: v.sub();
				break;

		case 3: v.mul();
				break;
		
		case 4: v.div();
				break;
		default: cout<<"Enter Valied Choice";
	}
	return 0;
}
