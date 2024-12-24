/* 18. Write a program to add, subtract, multiply and divide two integers using userdefined type function with return type.*/
#include<stdio.h>
#include<stdio.h>

int add(int num1, int num2);
int sub(int num1, int num2);
int mult(int num1, int num2);
int div(int num1, int num2);

int main()
{
	int  num1,num2;
	char option;
	printf("Enter valuefor num1 and num2:\n");
	scanf("%d %d",&num1,&num2);
	printf("Enter option:\n");
	scanf(" %c",&option);
	
	switch(option)
	{
		case '+':
			
			printf("addition is:%d",add(num1,num2));
			break;
		case '-':
			sub(num1,num2);
				printf("subtraction is:%d",sub(num1,num2));
			break;
		case '*':
			mult(num1,num2);
				printf("multiplication is:%d",mult(num1,num2));
			break;
		case '/':
			div(num1,num2);
				printf("division is:%d",div(num1,num2));
			break;
		default:
			printf("INVALID");
		
	}
}
	int add(int num1,int num2)
	{
		return num1+num2;
	}
	
		int sub(int num1,int num2)
	{
		return num1-num2;
	}
		int mult(int num1,int num2)
	{
		return num1*num2;
	}
		int div(int num1,int num2)
	{
		return num1/num2;
	}
	
	

