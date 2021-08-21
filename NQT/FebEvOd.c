#include<stdio.h>

int main()
{
	int n,a=1,b=1,c,ev=0,od=0,i;
	scanf("%d",&n);
	if(n>=5&&n<=20)
	{
	for(i=0;i<n;i++)
	{
		printf("%d ",a);
		c=a+b;
		a=b;
		b=c;
		if(a%2==0){
			ev++;	
		}
		else{
			od++;
		}
	}
		printf("\n%d",ev);
		printf("\n%d",od);
	}
	else{
	printf("\nInvalid input");
	}

}
