/* 15. Write a program for addition of two matrices of any order in C.*/
#include<stdio.h>
int main(){
	
	int i,j,a,b,c,d;
	
	
	printf("Order of matrixA:\n");
	scanf("%d %d",&a,&b);
	printf("Order of matrixB:\n");
	scanf("%d %d",&c,&d);
	
	int matrixA[a][b],matrixB[c][d],matrixC[a][b];
	
		printf("Value for matrixA:\n");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			scanf("%d",&matrixA[i][j]);
		}
	}
	
	
			printf("Value for matrixB:\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<d;j++)
		{
			scanf("%d",&matrixB[i][j]);
		}
	}
	
			printf("ADDITION:\n");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			matrixC[i][j]=matrixA[i][j]+matrixB[i][j];
			
		}
		
	}
	
	
		for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			matrixC[i][j]=matrixA[i][j]+matrixB[i][j];
		
	
	printf("%d\t",matrixC[i][j]);
} 
printf("\n");
}
return 0;
	
}

