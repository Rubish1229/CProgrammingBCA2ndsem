//an array with an odd number of element is said to be centered if all elements 
//(except the middle one are srictly greater than the value of middle element)  
//note that only arrays with an odd nmber of elemets have a middle element. 
//Write a function that accepts an integer array and returns 1 if it is a centered array. 
//otherwise it return 0.


#include<stdio.h>
int main()
{
	int arr[]={2,4,5,3,6};
	int size= sizeof(arr)/sizeof(arr[0]);
	
	int result= iscentered(arr,size);
	printf("%d\n",result);
}
int iscentered(int arr[],int size)
	{
		if(size%2==0)
		{
		return 0;
		}
		
		
		int mid=size/2;
		
		for(int i=0;i<size;i++)
		{
			if(size!=mid && arr[i]<=arr[mid]){
				return 0;
			}
		}
	
	return 1;
}



//Write a function that takes an array of integer as an argument and returns a value based on the sum of the even
//and oddd numbers of array. let x=be sum of odd number and y = be sum of even number. 
//The function should return x-y...

//#include<stdio.h>
//int x=0,y=0,i;
//oddeven(int arr[]){
//	for(i=0;i<5;i++){
//		if(arr[i]%2==0){
//			y=y+arr[i];
//		}
//		else{
//			x=x+arr[i];
//		}
//	}
//}
//int main()
//{
//	int arr[5]={1,2,3,4,5};
//	
//	printf("x-y=%d",x,y,x-y);
//	
//	return 0;
//}
