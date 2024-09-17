//WAP to read two array of size 5 and store the sum into third array.

#include<stdio.h>
int main()
{
	int arr1[5],arr2[5],sumarr[5];
	int i;
	for(i=0;i<5;i++)
	{
		printf("Enter value for arr1:");
		scanf("%d",&arr1[i]);
		printf("\n");
	}
	for(i=0;i<5;i++)
	{
		printf("Enter value for arr2:");
		scanf("%d",&arr2[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("The value for arr1+arr2:");
		sumarr[i]=arr1[i]+arr2[i];
		printf("The sum of place: %d: %d\n",i,sumarr[i]);
	}
}
