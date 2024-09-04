//wap a program to read marks of 5 stdeunts. calculate sum and average using arrays.
#include<stdio.h>
int main()
{
	float marks[5];
	float sum=0,avg;
	int i;
	for(i=0;i<5;i++)
	{
		scanf("%f",&marks[i]);
	}
	for(i=0;i<5;i++)
	{
		sum=sum+marks[i];
	}
	avg=sum/5;
	printf("sum=%f   avg=%f",sum,avg);
	
}
