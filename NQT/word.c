/*The program will recieve 3 English words inputs from STDIN These three words will be read one at a time, in three separate line

1. The program will recieve 3 English words inputs from STDIN
2.These three words will be read one at a time, in three separate line
3.The first word should be changed like all vowels should be replaced by *
4.The second word should be changed like all consonants should be replaced by @
5.The third word should be changed like all char should be converted to upper case
6.Then concatenate the three words and print them
7.Other than these concatenated word, no other characters/string should or message should be written to STDOUT*/

#include<stdio.h>
#include<string.h>

int main(){
	char a[10],b[10],c[10];
	int i;
	printf("Enter Three words\n");
	scanf("%s%s%s",&a,&b,&c);
	for(i=0;a[i]!='\0';i++){
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
		a[i]='*';
	}
	
		for(i=0;b[i]!='\0';i++){
		if(!(b[i]=='a'||b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='u'||b[i]=='A'||b[i]=='E'||b[i]=='I'||b[i]=='O'||b[i]=='U'))
		b[i]='@';
	}
	c[10]=strupr(c);
	printf("%s%s%s",a,b,c);
	//printf("%s%s%s",a,b,strupr(c));
	return 0;
	
}
