#include<iostream>
using namespace std;

class BankIntrest{
	int P,Y;
	float R,ret;
	public:
		BankIntrest(){}
		BankIntrest(int p,int y,float r);
		BankIntrest(int p,int y,int r);
		void show();
		
};
BankIntrest::BankIntrest(int p,int y,float r){
	int i;
	P=p;
	Y=y;
	R=r;
	ret=P;
	for(i=0;i<Y;i++){
		ret*=(1+R);
	}
}

BankIntrest :: BankIntrest(int p, int y, int r)
{
    P = p;
    Y = y;
    R = float(r)/100;
    ret = p;
    for (int i = 0; i < y; i++)
    {
        ret = ret * (1+R);
    }
}

void BankIntrest::show(){
	cout<<"You will get "<<ret<<" Rs after "<<Y<<" Years"<<endl;
}

int main(){
	BankIntrest b1,b2,b3;
	int p,y,R;
	float r;
	cout<<"Enter value of Principal,Year and Rate"<<endl;
	cin>>p>>y>>r;
	b1=BankIntrest(p,y,r);
	b1.show();
	cout<<"Enter value of Principal,Year and Rate"<<endl;
	cin>>p>>y>>R;
	b2=BankIntrest(p,y,R);
	b2.show();
	return 0;
	
}
