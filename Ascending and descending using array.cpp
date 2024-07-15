#include<stdio.h>
int main(){
	
	int num[5]={33,69,44,3,91},i,j;
	int temp;
	
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(num[i]>num[j])
			{
				temp=num[i];
				num[i]=num[j];
				num[j]=temp;
			}
		}
		printf("The ascending order are:%d\n",num[i]);
	}
		
		printf("\n");
	for(i=4;i>=0;i--)
	{
		printf("The descending order are:%d\n",num[i]);
	}
	
}
