#include<stdio.h>
#include<stdlib.h>
void sortarray(int*,int);
int i,j;
int main()
{
	FILE *sort;
	int arr[]={22,24,21,12,23};
	int size=sizeof(int)/sizeof(arr[0]);
	
	sort=fopen("\\D:\CFILEHANDLING\\sortarray.txt","w");
	
	//sorting of array
	sortarray(arr,size);
	
	printf("Sorted array:\n");
	for(i=0;i<size;i++)
	{
		fprintf(sort,"%d",*(arr+i));
	}
	fclose(sort);
	return 0;
}

void sortarray(int*arr, int size){
	int temp;
	for(i=0;i<size-1;i++)
{
	for(j=i+1;j<size;j++)
	{
		if(*(arr+i) > *(arr+j))
		{
			temp=*(arr+i);
			*(arr+i)=*(arr+j);
			*(arr+j)=temp;	
				}
	}
	}
		
}
