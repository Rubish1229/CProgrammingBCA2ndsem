#include<stdio.h>
int main()
{
	int arr[]={10,20,30,40,50};
	int *ptr;
	ptr=arr;//pointing to the first element of array
	
	//print elements using pointer elements
	for(int i=0;i<5;i++)
	{
		printf("Value at arr[%d]=%d\n",i,*(ptr+i));
		
	}
	return 0;
}

