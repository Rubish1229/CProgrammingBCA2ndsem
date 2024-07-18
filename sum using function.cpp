#include<stdio.h>
int addition(int,int );//function declaration

int main()
{
	int firstNum,secondNum;
	printf("Enter two number:");
	scanf("%d %d",&firstNum,&secondNum);
	
	printf("sum of two numbers=%d",addition(firstNum,secondNum));
	
	return 0;
}

	int addition(int x,int y)
	{
		int sum;
		sum=x+y;
		
		return sum;
	}
