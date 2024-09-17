//WAP to read marks of 5 students. calculate sum and average.

#include<stdio.h>
int main()
{
	int marks[5];
	int sum=0,avg,i;
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&marks[i]);
	}
	for(i=0;i<5;i++)
	{
		sum=sum+marks[i];
		printf("The sum is:%d",sum);
	}
	avg=sum/5;
	
	printf("The average value is:%d",avg);
	
}
