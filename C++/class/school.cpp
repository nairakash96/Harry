#include<iostream>
#include<string.h>
using namespace std;

class School{
	int Rn[20];
	string name[20];
	string dob[20];
	public:
		int n,i;
		void set(){
			cout<<"Enter no of students"<<endl;
			cin>>n;
			for(i=0;i<n;i++){
			cout<<"Enter Roll No , DOB & Name of student "<<i+1<<endl;
			cin>>Rn[i]>>dob[i]>>name[i];
			}
		}
		void display(){
			cout<<"Roll No\t"<<"\tDOB\t"<<"\tName\t"<<endl;
			for(i=0;i<n;i++){
				cout<<Rn[i]<<"\t\t"<<dob[i]<<"\t\t"<<name[i]<<endl;
			//cout<<"Roll No and Name of student "<<i+1<<" is "<<Rn[i]<<" and "<<name[i]<<endl;
			}
		}
};
int main(){
	School s;
	s.set();
	s.display();
	return 0;
}
