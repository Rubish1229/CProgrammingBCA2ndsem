#include<stdio.h>

	
void sum();
int main()
{
	sum();
	printf("\n");
	printf("HELLO WORLD\n");
	sum();
}
void sum()

{
	int num1,num2,sum;
	printf("Enter any number:");
	scanf("%d %d",&num1,&num2);
	
	sum=num1+num2;
	printf("The sum of two numbers is:%d",sum);
}

	
	

