/*Consider the below series:
1, 2, 1, 3, 2, 5, 3, 7, 5, 11, 8, 13, 13, 17�..

This series is a mixture of 2 series fail the odd terms in this series form a Fibonacci series and all the even terms are the prime numbers in ascending order

Write a program to find the Nth term in this series

The value N in a positive integer that should be read from mm. The Nth term that is calculated by the program should be written to STDOUT Otherthan 
the value of Nth term , no other characters / string or message should be written to STDOUT.

For example, when N:14, the 14th term in the series is 17 So only the value 17 should be printed to STDOUT*/

#include<stdio.h>
#include<conio.h>

int main(){
	int n,i;
	printf("Enter value of n ");
	scanf("%d",&n);
	if(n%2 == 1) 
        feb (n/2 + 1);
    else 
        prime(n/2);
    
	return 0;
}
void feb(int n){
 int a = 0, b = 1, next,i;
    //the below code is for fibonacci series till nth position
    for (i = 1; i<=n; i++)
    {
        next = a + b;
        a = b;
        b = next;
    }
     printf("%d", a);
}

void prime(int n){
 int i, j, flag, count =0;
    //as prime numbers in given question start from 2
    for (i=2; i<=n; i++)
    {
        flag = 0;
        //to check if divisible apart from 1 & itself
        //loop starts from 2 to ignore divisibilty by 1 & ends before the number itself
        for (j=2; j<i; j++)
        {
            if(i%j == 0)
            {
                //number is not prime
                flag = 1;
                break;
            }
        }
        //is prime
        if (flag == 0){
            //if found the nth prime number
            if(++count == n)
            {
                printf("%d", i);
                break;
            }
        }
    }
}
