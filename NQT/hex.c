#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
	char hex[20];
	long long decimal;
	int i=0,val,len;
	decimal=0;
	scanf("%s",&hex);
	len=strlen(hex);
//	printf("\n%d",len);
	len--;
//	printf("\n%d",len);
	for(i=0;hex[i]!='\0';i++)
	{
	if(hex[i]>='0'&& hex[i]<='9'){
		val=hex[i]-48;
	}
	else if(hex[i]>='a'&& hex[i]<='g'){
		val=hex[i]-97+10;
	}
	else if(hex[i]>='A'&& hex[i]<='G'){
		val=hex[i]-65+10;
	}
	decimal=decimal+val*pow(17,len);
	len--;
	}	
	printf("Decimal=%ld",decimal);
	return 0;
}
