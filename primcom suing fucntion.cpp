//wap ti print prime and composite number.
#include<stdio.h>
int num,i,count=0;
int primecom(int);
int main()
{

	printf("Enter any number:\n");
	scanf("%d",&num);
	
	if(primecom(num)==1)
	{
		printf("PRIME NUMBER.");
	}
	else{
		printf("COMPOSITE NUMBER.");
			}
	return 0;
}
primecom(int x){
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			count ++;
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

