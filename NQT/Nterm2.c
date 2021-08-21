/*0, 0, 2, 1, 4, 2, 6, 3, 8, 4, 10, 5, 12, 6, 14, 7, 16, 8 This series is a mixture of 2 series
 all the odd terms in this series  form even numbers in  ascending order and every even terms is 
 derived from the previous  term using the formula (x/2)*/

#include<stdio.h>
#include<conio.h>
int main(){
	int n,i,a=0,b=0;
	printf("Enter value of n ");
	scanf("%d",&n);
	//for(i=1;i<=n;i++){
	while(i<=n){
		if(i%2!=0){
			if(i>1)
			a=a+2;
		}
		else{
		b=a/2;
	}
	i++;
}
	
	if(n%2!=0)
	printf("%d ",a);
	else
	printf("%d ",b);
}
