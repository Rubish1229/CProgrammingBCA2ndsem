//prime or composite
#include<stdio.h>
int main()
{
	int num;
	printf("Enter any number:\n");
	scanf("%d",&num);
	
	if((num%1==0) && ((num/num)==1))
	{
		printf("The number is prime number.");
	}
	else{
		printf("composite");
	}
	
}
