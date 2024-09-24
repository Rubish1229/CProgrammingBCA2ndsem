/ WAP to sort an array using pointer or to pass ponter as a function.


#include<stdio.h>

void sortArray(int*,int);

int main()
{
	int arr[]={50,10,40,30,40};
	int size = sizeof(arr)/sizeof(arr[0]);
	
	//sorting the array
	sortArray(arr,size);
	
	//printing the sorted array
	printf("Sorted array:\n");
	for(int i=0;i<size;i++)
	{
		printf("%d",*(arr+i));
	}
	return 0;
}
void sortArray(int*arr,int size){

int temp;
for(int i=0;i<size-1;i++)
{
	for(int j=i+1;j<size;j++)
	{
		if(*(arr+i) > *(arr+j)){
			
			//swap the value using temp variable
			temp=*(arr+i);
			*(arr+i)=*(arr+j);
			*(arr+j)=temp;
		}
	}
}
}
