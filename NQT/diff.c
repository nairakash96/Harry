#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int odd=0,even=0,i=0;
	long long  n;
	scanf("%lld",&n);
	while(n!=0){
		if(i%2==0){
		even=even+n%10;
		n=n/10;
		i++;
	}
	else{
		odd=odd+n%10;
		n=n/10;
		i++;
	}
}
printf("\nDiff %d",abs(odd-even)); 
}
