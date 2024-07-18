#include<stdio.h>
int main()
{
	int num,i,count=0;
	printf("Enter any number:");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			count ++;
		
			printf("The number is prime.");
		}
		else{
			printf("The number is composite.");
		}
	}

}
