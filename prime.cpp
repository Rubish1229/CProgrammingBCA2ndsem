#include<stdio.h>

int main(){
	int num,i,count=0;
	printf("Enter the value:");
	scanf("%d",&num);
	
	for(i=1;i<num;i++)
	{
		if(num%i==0)
		{
			count++;
		}
	}
	switch(count)
	{
		case 1:
			printf("It is prime number.");
			break;
	
		default :
			printf("Not a prime.");
}
}
