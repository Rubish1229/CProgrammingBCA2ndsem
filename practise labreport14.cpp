/* 14. Write a Program to reverse the array elements in C Programming*/
#include<stdio.h>
int main()
{
	int arr[5]={10,20,30,40,50};
	int size=sizeof(arr)/sizeof(arr[0]);
	int i;
	for(i=0;i<size;i++)
	{
		printf("Original array:%d\n",arr[i]);
	}
	printf("\n");
	for(i=size-1;i>=0;i--)
	{
		printf("Rversed array is:%d\n",arr[i]);
	
	}
	return 0;
}
