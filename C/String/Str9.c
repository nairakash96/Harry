#include<stdio.h>
#include<conio.h>
void decrypt(char *c);
int main(){
   // char *c="Akash";  Read only memory. so we cant change individual value.
    char c[40];
    printf("\nEnter Your Message ");
    gets(c);
    decrypt(c);
    printf("\nDecrypted string ---> %s",c);
     return 0;
}
void decrypt(char *c){
    char *ptr=c;
    while(*ptr!='\0'){
        *ptr=*ptr-2;
        ptr++;
    }
}