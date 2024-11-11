//wap to print odd even using function
#include<stdio.h>
int oddeven(int);
int i,num;
int main()
{
	printf("Enter any number:\n");
	scanf("%d",&num);
	
	if(oddeven(num)==1)
	{
		printf("EVEN NUMBER");
	}
	else{
		printf("ODD NUMBER");
	}
	
}
oddeven(int x){
	if(num%2==0)
	{
		return 1;
	}
	else{
		return 2;
	}
}
