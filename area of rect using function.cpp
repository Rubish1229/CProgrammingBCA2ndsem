//wap a function to calcuate area of rectangle and compare it using function.
#include<stdio.h>
int rect(int ,int);
int main()
{
	int a,b,c,d;
	int area1,area2;
	printf("Enter value for a and b:\n");
	scanf("%d %d",&a,&b);
	printf("Enter value for c and d:\n");
	scanf("%d %d",&c,&d);
	
	area1=rect(a,b);
	area2=rect(c,d);
	
	if(area1>area2)
	{
		
		printf("Area 1 is greatest.",area1);
	}
	else{
	
		printf("Area 2 is greatest.",area2);
	}
	
}
int rect(int a,int b)
{
	int total;
	total=a*b;
	return total;
	
	
}
