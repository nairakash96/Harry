#include<stdio.h>
#include<conio.h>

int main(){
	int ch,a;
	char e,f;
	printf("Enter Your choice\n");
		printf("1.Onida\t10000\n2.LG\t8000\n3.Nokia\t6000\n");
	scanf("%d",&ch);
	switch(ch){
		case 1:a=10000;
				printf("You have selected Onida\n");
			   break;
		case 2:a=8000;
				printf("You have selected LG\n");
				break;
		case 3:a=6000;
				printf("You have selected Nokia\n");
				break;
		default:printf("Enter Valid Input\n");
				break;
	}
	printf("Do you want exchange offer\t");
	scanf("%s",&e);
	
	if((e=='Y')||(e=='y')){
	printf("Is your TV working\t");
	scanf("%s",&f);
	if((f=='Y')||(f=='y'))
	a-=3000;
	else
	a-=2000;
	}
	printf("\nYou have to pay %d",a);
}
