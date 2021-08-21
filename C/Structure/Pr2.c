#include<stdio.h>
#include<conio.h>
#include<string.h>
struct employee{
int id;
float salary;
char name[30];
};
int main(){
    struct employee v1,*ptr;
    ptr=&v1;
    v1.id=123;
    v1.salary=123.56;
    strcpy(v1.name,"Akash");
printf("\n%d\t%.3f\t %s",v1.id,v1.salary,v1.name);
printf("\n%d\t%.3f\t %s",(*ptr).id,(*ptr).salary,(*ptr).name);
printf("\n%d\t%.3f\t %s",ptr->id,ptr->salary,ptr->name);

     return 0;
}