#include<stdio.h>
#include<conio.h>

int main(){
	int x,n,res;
	printf("Enter value of x and n ");
	scanf("%d %d",&x,&n);
	res=expi(x,n);
	printf("\n%d power of %d is %d",x,n,res);
	return 0;
}

int expi(int x,int n){
	int res;
	if(n<1)
	return 1;
	else
	return res=x*expi(x,n-1);
}
