//calculator
#include<stdio.h>
int main(){
	int num1,num2,sum,mult,divide,sub;
	char choice;
	printf("Enter any two numbers:");
	scanf("%d %d",&num1,&num2);
	
	printf("Some of the operators are:\n");
	printf("'+'=Addition\n");
	printf("'-'=Subtraction\n");
	printf("'/'=Division\n");
	printf("'*'=Multiplication\n");
	printf("Enter any operator:");
	scanf(" %c",&choice);
	
	switch(choice)
	{
		case '+':
			 sum=num1+num2;
			printf("The sum is:%d",sum);
			break;
		
			
		case '-':
		
			 sub=num1-num2;
			printf("The subtraction of two number is:%d",sub);
			break;
		
			
		case '/':
			 
			
			if(num2==0 || num1<num2){
				divide=num1/num2; 
			 
			 		printf("The numbers cannot be divisible");
			 }
			 else
			 {
			  	printf("The division of two numbers is:%d",divide);
			 
			 }
			 
			break;
		
			
		case '*':
			
			 mult=num1*num2;
			printf("The multiplication of two numbers is:%d",mult);
			break;
		
			
		default:
			printf("The character is invalid.");
			
			
			
	}
	return 0;
	
}
