#include<stdio.h>
int main()
{
	int matrixA[20][20],matrixB[20][20],m,n,p,q,i,j,sum[20][20];
	printf("Enter the number of rows & columns (MATRIX-A):");
	scanf("%d %d",&m,&n);
	printf("\n");	
	printf("Enter the number of rows & columns (MATRIX-A):");
	scanf("%d %d",&p,&q);
	
	if(n==p){
	
	printf("Enter the values for matrixA:\n");
	 	for(i=0;i<m;i++)
	 	{
	 		for(j=0;j<n;j++)
	 		{
	 			scanf("%d",&matrixA[i][j]);
			 }
		 }
	 
	printf("\n");
	printf("Enter the values for matrixB:\n");
		for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
			{
				scanf("%d",&matrixB[i][j]);
			}
		}
		
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
		sum[i][j]= matrixA[i][j]+matrixB[i][j];	
		printf("%d\t",sum[i][j]);
	}
	
printf("\n");	
	 }
}
	else{
		printf("Invalid order.");
	
}
}
