#include<stdio.h>
int main(){
	int num1,num2,num3;
	printf("Enter the value:\n");
	scanf("%d %d %d",&num1,&num2,&num3);
	
	num3=num1;
	num1=num2;
	num2=num3;
	
	printf("The swapped value of num1 is:%d",num1);
	printf("\nThe swapped value of num2 is:%d",num2);
	
	return 0;
	
}
