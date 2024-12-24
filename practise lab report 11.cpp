/* Write a Program to Search an element in array.*/
#include<stdio.h>
int main()
{
	int arr[5]={10,20,30,40,50};
	int element,i;
	int search=0;
	
	printf("Enter element to search:");
	scanf("%d",&element);
	for(i=0;i<5;i++)
	{
		if(arr[i]==element)
		{
			printf("place:%d   element:%d",i,arr[i]);
			break;
		}
		
	}
	if(arr[i]!=element){
		printf("Invalid");
	}
}
