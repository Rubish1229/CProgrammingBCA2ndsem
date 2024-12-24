/* 16. Write a Program to multiply two 3 X 3 Matrices. */
#include<stdio.h>
int main()
{
	int a,b,c,d;

	int i,j,k;
	printf("Enter size of matrixA:\n");
	scanf("%d %d",&a,&b);
	printf("Enter size of matrixB:\n");
	scanf("%d %d",&c,&d);
		int matrixA[a][b],matrixB[c][d],matrixC[a][d];
		
		
		if(b==c)
		{
			
			
			
			for(i=0;i<a;i++)
	{
		for(j=0;j<d;j++)
		{
			matrixC[i][j]=0;
		}
	}
		
	printf("Matrix A");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			scanf("%d",&matrixA[i][j]);
		}
	}
	printf("Matrix B");
	for(i=0;i<c;i++)
	{
		for(j=0;j<d;j++)
		{
			scanf("%d",&matrixB[i][j]);
		}
	}
	
		
	for(i=0;i<a;i++)
	{
		for(j=0;j<d;j++)
		{
			for(k=0;k<b;k++)
			{
			
			matrixC[i][j]+=matrixA[i][k]*matrixB[k][j];
				
		}
	
	
	}
}


	for(i=0;i<a;i++)
	{
		for(j=0;j<d;j++)
		{
			
			printf("%d\t",matrixC[i][j]);
		}
		printf("\n");
}
}
else{
	printf("INvalid order.");
}
	
}
