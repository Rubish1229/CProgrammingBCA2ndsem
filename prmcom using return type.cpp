//prime and composite to dtermine return funtcion with paramter
#include<stdio.h>
int primecom(int);
int main()
{
	int num,total;
	printf("Enter any number:");
	scanf("%d",&num);
	
	total=primecom(num);
	if(total==0)
	{
		printf("The number is prime");
	}
	else{
		printf("The number is composite");
	}
}
int primecom(int x)
{
	int i,count=0;
	for( i=1;i<=x;i++)
	{
		if(x%i==0)
		{
			count ++;
		}	
	}
	if(count==2)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
