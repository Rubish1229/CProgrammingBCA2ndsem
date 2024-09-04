#include<stdio.h>
int main()
{
	int age[27];
	int i,youngest,eldest,seldest;
	
	for(i=0;i<27;i++)
	{
		printf("Employee:%d:",i+1);
		scanf("%d",&age[i]);
	}
	
	youngest=age[0];
	eldest=age[0];
	seldest=-1;
	
	for(i=1;i<27;i++)
	{
		if(age[i]<youngest)
		{
			youngest=age[i];
		}
		
		else if(age[i]>eldest)
		{
			seldest=eldest;
			eldest=age[i];
		}
		else if(age[i] > seldest && age[i] != eldest)
		{
			seldest=age[i];
		}
	}
	printf("The youngest:%d",youngest);
	printf("The seldest:%d",seldest);
	
	return 0;
}
