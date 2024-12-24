//Write a Program to Search an element in array.
#include<stdio.h>
int main()
{
	int arr[10]={10,20,30,40,50,60,70,80,90,100};
	int i,element;
	int search=0;
	printf("Enter any element:\n");
	scanf("%d",&element);
	
	for(i=0;i<10;i++){
		if(arr[i]==element)
		{
			printf("Element found in place:%d i.e.:%d",i,arr[i]);
			search=1;
			break;
			
		}
	
	}
	  if(search == 0) {
        printf("Element not found\n");
}
}
