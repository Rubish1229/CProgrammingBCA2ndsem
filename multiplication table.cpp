//multiplication table:
#include<stdio.h>
int main()
//2 4 6 8 10 12 14 16 18 20....
{
	int num,i;
	printf("Enter any number:");
	scanf("%d",&num);
	printf("The multplication table of %d:\n",num);
	for(i=1;i<=10;i++)
	{
	
		printf("%d*%d=%d\n",num,i,num*i);
	}
	return 0;
}
