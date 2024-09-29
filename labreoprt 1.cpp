//Write a Program to Check Whether a Number is Prime or not
#include<stdio.h>
int main()
{
	int num1,i,count=0;
	printf("Enter any number:\n");
	scanf("%d",&num1);
	
	for(i=1;i<=num1;i++)
	{
		if(num1%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		printf("Prime number.");
	}
	else{
		printf("Composite number.");
	}
	return 0;
}
