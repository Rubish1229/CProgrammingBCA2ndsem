//Array
// program in c to store first 5 values in array and display it.
#include<stdio.h>
int main(){
	int age[100],size,i;
	printf("Enter array size:\n");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		printf("Array at %d position\n",i);
		scanf("%d",&age[i]);
	}
	printf("Array elements are:\t");
	for(i=0;i<size;i++)
	{
		printf("%d\t",&age[i]);
	}
	return 0;
	
	
	
}
