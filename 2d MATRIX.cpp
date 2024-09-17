//2-D array
#include<stdio.h>
int main()
{
		int i,j;
	int matrix[3][5]={
				{0,5,6,7,8},
				{9,12,13,19,50},
				{10,14,15,20,100},
					};

	for(i=0;i<=2;i++)
	{
		for(j=0;j<=4;j++)
		{
			printf("%d\t",matrix[i][j]);
		
		}
			printf("\n");
	}

}
