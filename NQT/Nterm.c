//Write a Program Find the nth term of the series. 1,1,2,3,4,9,8,27,16,81,32,243,….
#include<stdio.h>
#include<conio.h>
int main(){
	int n;
	printf("Enter value of n ");
	scanf("%d",&n);
	if(n%2==0)
	three(n/2);
	else
	two(n/2+1);
	return 0;
}
int three(int n){
	int x;
	x=pow(3,n-1);
	printf("Nth Term is %d ",x);
}

int two(int n){
	int x;
	x=pow(2,n-1);
	printf("Nth Term is %d ",x);
}
