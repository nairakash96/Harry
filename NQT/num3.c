#include<stdio.h>
#include<math.h>
int main(){
	int i,n1,n2,a,b,c,n;
	scanf("%d %d",&n1,&n2);
	if(n1<n2){
		for(i=n1;i<n2;i++){
			a=i/100;
			b=(i-a*100)/10;
			c=i-(a*100+b*10);
			n=(a*a*a)+(b*b*b)+(c*c*c);
		if(i==n)
			printf("\n%d",n);
		}
	}
	else
	printf("Wrong Input");
	return 0;
}
