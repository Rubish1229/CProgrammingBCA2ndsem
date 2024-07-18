#include<stdio.h>
bool oe();
int num;
int main()
{
	printf("ENter any number:");
	scanf("%d",&num);
	if(oe())
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
	return 0;
	
}
bool oe()
{
	if(num%2==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
