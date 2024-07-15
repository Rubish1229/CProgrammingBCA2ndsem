#include<stdio.h>
int main(){
	int age[5]={40,20,26,19,33};
	int i,count=0;
	
	printf("Age between 20-30 are:");
	
	for(i=0;i<5;i++)
	{
		if(age[i] >=20 && age[i] <=30)
		{
			count++;
			printf("\t%d",age[i]);
		}
			
	}
		
	printf("\nTotal age found =%d",count);	
	return 0;
}
