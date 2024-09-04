#include<stdio.h>
int main()
{
	int num1,num2,total;
	char option;
	printf("Enter the operator (+,-,/,*)");
	scanf(" %c",&option);
	printf("Enter two numbers:");
	scanf("%d %d",&num1,&num2);
	switch(option)
	{
		case '+':
			total=num1+num2;
			printf("The sum is:%d",total);
			break;
		
		case '-':
			total=num1-num2;
			printf("The subtraction is:%d",total);
			break;
			
		case '/':
			total=num1/num2;
			printf("The division is:%d",total);
			break;
			
		case '*':
			total=num1*num2;
			printf("The multiplication is:%d",total);
			break;
			
		default:
			printf("INVALID");
	}
}





















//#include<stdio.h>
//int main()
//{
//	int num1,num2,num3,num4,area1,area2;
//	printf("Enter length for Area1:");
//	scanf("%d",&num1);
//	printf("Enter breadth for Area1:");
//	scanf("%d",&num2);
//	area1=num1*num2;
//	printf("Area of rectangle Area1 is:%d\n",area1);
//	
//	
//	printf("\nEnter length for Area2:");
//	scanf("%d",&num3);
//	printf("Enter breadth for Area2:");
//	scanf("%d",&num4);
//	area2=num3*num4;
//	printf("Area of rectangle Area2 is:%d\n",area2);
//	
//	
//	if(area1>area2)
//	{
//		printf("\nThe largest is Area1.",area1);
//	}
//	else{
//			printf("\nThe largest is Area2.",area2);
//	}
//	
//}
