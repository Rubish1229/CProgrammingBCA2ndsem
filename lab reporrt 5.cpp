//Write a program to find the factorial of a number.
#include<stdio.h>
int main()
{
	int num,i,fact=1;
	printf("Enter any number:\n");
	scanf("%d",&num);
	
	for(i=num;i>=1;i--)
	{
		fact=fact*i;
		
	}
	printf("The factorial value is:%d",fact);
	return 0;
}

