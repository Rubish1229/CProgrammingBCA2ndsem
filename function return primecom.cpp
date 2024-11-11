//wap to find prime and composite using function
#include<stdio.h>
int primcom(int);
int num,i,count=0;
int main()
{
	printf("Enter any number:\n");
	scanf("%d",&num);
	

	if(primcom(num)==1)
	{
		printf("Prime number.");
	}
	else{
		printf("Composite number.");
	}
	return 0;
}
int primcom(int x){
		for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		return 1;
	}
	else{
		return 2;
		
	}
	
}
