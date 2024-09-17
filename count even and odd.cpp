//Wap to read 10 integers and count total no of en and odd elements
#include<stdio.h>
int main()
{
	int num[10];
	int even=0,odd=0;
	int i;
	for(i=0;i<10;i++)
	{
		scanf("%d",&num[i]);
	}
	
	for(i=0;i<10;i++)
	{
		if(num[i]%2==0){
			even=even+1;
		}
		else{
			odd=odd+1;
		}
	}
	printf("The no of even number is:%d\n",even);
	printf("The no of odd number is:%d",odd);
	
}
