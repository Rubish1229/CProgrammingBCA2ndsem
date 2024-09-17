//wap to print transpose of matrix.
#include<stdio.h>
int main()
{
	int a[3][2];
	int i,j;
		for(i=0;i<3;i++)
		{
			for(j=0;j<2;j++)
			{
				scanf("%d\t",&a[i][j]);
			}
		}
		
		printf("The matrix a is:\n");
		for(i=0;i<3;i++)
		{
			for(j=0;j<2;j++)
			{
				printf("%d\t",a[i][j]);
			}
			printf("\n");
		}
		
		printf("\n");
	
		printf("Transpose:\n");
		for(i=0;i<2;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("%d\t",a[j][i]);
			}
			printf("\n");
		}
}
