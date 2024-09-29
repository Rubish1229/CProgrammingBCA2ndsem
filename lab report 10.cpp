//Write a Program to perform addition of all elements in Array.
#include<stdio.h>
int main()
{
	int arr[5];
	int i,sum=0;
	printf("Enter any 5 numbers:\n");

	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++)
	{
		sum=sum+arr[i];
	}
	printf("The sum of all elements in an arrat:%d",sum);
}
