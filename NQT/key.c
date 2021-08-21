#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(){
	char str[16][10]={"break","case","continue","default","defer","else","for","func","goto","if","map","range","return","struct","type","var"};
	char inp[20];
	int flag=0,i;
	printf("Enter word ");
	scanf("%s",&inp);
	for(i=0;i<16;i++)
	if(strcmp(inp,str[i])==0){
		flag=1;
	}
	if(flag==1)	
	printf("%s is Keword",inp);
	else
	printf("%s is not a keyword",inp);
	getch();
	//return 0;
	}
