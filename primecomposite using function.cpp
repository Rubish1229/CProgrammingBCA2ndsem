//wap to find prime and composite using function
#include<stdio.h>

int main()
{
	int num,i,count=0;
	printf("Enter any number:\n");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		printf("Prime number.");
	}
	else{
		printf("Composite number.");
	}
	return 0;
}
