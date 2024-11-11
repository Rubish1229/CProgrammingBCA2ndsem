	/* Write a program to check whether a number is positive, negative or zero using
switch case.*/
#include<stdio.h>
int main()
{
	int num;
	printf("Enter any number:\n");
	scanf("%d",&num);
	
	switch((num>0)-(num<0))
	{
		case +1:
			printf("Positive number");
			break;
		case -1:
			printf("Negative number");
			break;
		case 0:
			printf("Zero");
			break;
		default:
			printf("INVALID");
			
	}
	
}
