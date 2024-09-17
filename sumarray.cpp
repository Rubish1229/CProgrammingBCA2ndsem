//WAP a program to print array and calculate sum
#include<stdio.h>
int main()
{
	int a[2][2];
	int i,j,sum=0;
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			sum=sum+a[i][j];
		
		}
	}
		printf("sum:%d",sum);
}
