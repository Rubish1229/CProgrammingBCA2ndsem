//Write a program to find the largest and smallest among three entered numbers and
//also display whether the identified largest/smallest number is even or odd.

#include<stdio.h>
void oddeven(int num){
	if(num%2==0)
	{
		printf("Even number\n");
	}
	else{
		printf("Odd number\n");
	}
}
int main()
{
	int num1,num2,num3;
	int largest,smallest;
	printf("Enter num1:");
	scanf("%d",&num1);
	printf("Enter num2:");
	scanf("%d",&num2);
	printf("Enter num3:");
	scanf("%d",&num3);
	if(num1>num2 && num1>num3)
	{
		printf("Num1 is greatest.",num1);
		largest=num1;
		}	
	else if(num2>num1 && num2>num3)
	{
		printf("Num2 is greatest.");
		largest=num2;
	}
	else{
		printf("Num3 is greatest.");
		largest=num3;
	}
	printf("\n");
	if(num1<num2 && num1<num3)
	{
		printf("Num1 is smallest.",num1);
		smallest=num1;
		}	
	else if(num2<num1 && num2<num3)
	{
		printf("Num2 is smallest.");
		smallest=num2;
	}
	else{
		printf("Num3 is smallest.");
		smallest=num3;
	}
	
	printf("\n");
	oddeven(largest);
	printf("\n");
	oddeven(smallest);
	return 0;
}
