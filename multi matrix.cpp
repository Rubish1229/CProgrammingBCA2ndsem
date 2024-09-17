//Multiplication of matrix
#include<stdio.h>
int main(){
	int i,j,a,b,c;
	int matrix1[a][b],matrix2[b][c];
	printf("Enter row and column for matrix1:");
	scanf("%d %d",&a,&b);
	printf("Enter row and column for matrix2:");
	scanf("%d %d",&b,&c);
	
	printf("Enter value for matrix1:");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			scanf("%d",&matrix1[i][j]);
		}
	}
	
		printf("Enter value for matrix2:");
	for(i=0;i<b;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&matrix2[i][j]);
		}
	}
	

	printf("The multiplication is:");
	for(i=0;i<b;i++)
	{
		for(j=0;j<c;j++)
		{
			int matrix3[i][j]=matrix1[i][j]*matrix2[j][i];
		}
	}
	printf("The product is:%d",matrix3[i][j]);
	
}
