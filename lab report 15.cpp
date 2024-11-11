// Write a program for addition of two matrices of any order in C. 
#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	
	
	
	printf("Enter the number of rows and column for matrix A:\n");
	scanf("%d %d",&a,&b);
	printf("Enter the number of rows and column for matrix B:\n");
	scanf("%d %d",&c,&d);
	

	
	int matrixA[a][b],matrixB[c][d],matrixC[a][b];
	int i,j;
	if(a==c &&b==d){
	
	printf("Elements for MatrixA:\n");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			scanf("%d",&matrixA[i][j]);
		}
		printf("\n");
	}
	
	printf("Elements for MatrixB:\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<d;j++)
		{
			scanf("%d",&matrixB[i][j]);
		}
		printf("\n");
	}
	
	
	for(i=0;i<c;i++)
	{
		for(j=0;j<d;j++)
		{
	 matrixC[i][j]=matrixA[i][j]+matrixB[i][j];
	 printf("%d\t",matrixC[i][j]);
}
printf("\n");
}
}
else{
	printf("INVALID MATRIX DIMENSION.");
}



	
	
	
	return 0;
	
	
	
}
