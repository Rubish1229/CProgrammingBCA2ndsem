
#include<stdio.h>
 int main(){
	int arr[5]={10,20,30,40,50};
	int size=sizeof(arr)/sizeof(arr[0]);
	int temp,i,j;
	int smallest=0,largest=0;
	
	for(i=0;i<size-1;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[i]>arr[j])
			{
			
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			}
		}
	}
		for(i=0;i<size;i++)
		{
	printf("Sorted array is:%d",arr[i]);
	printf("\n");
}

	smallest=arr[0]+smallest;
	largest=arr[size-1]+largest;
	printf("Smallest :%d",smallest);
	printf("\n");
	printf("Largest :%d",largest);
return 0;	
}
