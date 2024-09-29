//Write a Program to Search an element in array.
#include<stdio.h>
int main()
{
	int arr[10]={10,20,30,40,50,60,70,80,90,100};
	int i,element;
	printf("Enter any element:\n");
	scanf("%d",&element);
	
	for(i=0;i<10;i++){
		if(arr[i]==element)
		{
			printf("Element found is:%d i.e.:%d",i,arr[i]);
			break;
		}
		if(i==10)
		{
			printf("Element not found");
		}
	}
	
}
