#include<stdio.h>

int main(){
	int in,ex,i;
	float in_cost=0,ex_cost=0,suf;
	scanf("%d %d",&in,&ex);
	do{
	for(i=0;i<in;i++){
		scanf("%f",&suf);
		in_cost+=suf;
	}
	in_cost*=18;
	for(i=0;i<ex;i++){
		scanf("%f",&suf);
		ex_cost+=suf;
	}
	ex_cost*=12;
	printf("Total cost %.1f INR",in_cost+ex_cost);
}while(in>0&&ex>0);
}
