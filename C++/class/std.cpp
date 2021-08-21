#include<iostream>
using namespace std;

class Student{
	
	public:
	int Rn;
		void set();
};
class Exam:Student{
	protected:
		int m1,m2;
	public:
		void setMk(){
			cout<<"Enter Marks of Maths & Physic "<<endl;
			cin>>m1>>m2;
		}
};

void Student ::set(){
			cout<<"Enter Roll no of student "<<endl;
			cin>>Rn;
		}
int main(){
	Exam r;
	r.set();
	r.setMk();
/*r.setAv();
	r.display();*/
}
