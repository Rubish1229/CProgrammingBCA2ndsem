#include<stdio.h>
int main()
{
	int i,j;
	printf("The multiplication table is:");
	for(i=1;i<=10;i++)
	{
		for(j=1;j<=10;j++){
			printf("%d X %d = %d\n",i,j,i*j);
		}
		printf("\n");
		
	}
	
}
