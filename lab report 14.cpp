//Write a Program to reverse the array elements in C Programming
#include<stdio.h>
int main()
{
	int n;
	int arr[n];
	int i;
	printf("Enter n number of element:\n");
	scanf("%d",&n);
	
	printf("Enter elemnts:\n");
		for(i=0;i<n;i++)
	{
		scanf("%d\t",&arr[i]);
	}
	
	printf("REVERSED ARRAY");
	for(i=n-1;i>=0;i--)
	{
		printf("%d\t",arr[i]);
	}
	return 0;
}
