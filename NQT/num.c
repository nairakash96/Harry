#include<stdio.h>
#include<conio.h>
int main(){
	int i,n,count=1;
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		if((n%2==0)||(n%3==0)||(n%5==0)){
		count++;
	}
	}
	printf("\n%d",count);
	return 0;
}
