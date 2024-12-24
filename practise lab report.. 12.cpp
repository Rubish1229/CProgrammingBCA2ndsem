/* Write a Program to perform addition of all elements in Array. 
*/
#include<stdio.h>
int main(){
	int arr[5]={10,20,30,40,60};
	int add=0,i;
	
	for(i=0;i<5;i++)
	{
		add=arr[i]+add;
	}
	printf("the total is:%d",add);
	return 0;
}
