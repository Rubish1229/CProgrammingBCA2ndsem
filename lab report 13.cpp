//Write a Program to find the largest and smallest element in Array
#include<stdio.h>
int main()
{
	int arr[5]={12,20,30,40,50};
	int i,j,temp;
	int size=sizeof(arr)/sizeof(arr[0]);
	
	for(arr[i]=0;arr[i]<size-1;i++)
	{
		for(arr[j]=i+1;arr[j]<size;j++)
		{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;	
		}
	}
	int smallest=arr[0];
	printf("The smallest elemnt in array is:%d\n",arr[0]);
	int largest=arr[size-1];
	printf("The largest elemnt in array is:%d",arr[size-1]);
}
