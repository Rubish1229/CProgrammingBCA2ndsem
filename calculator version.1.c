#include<stdio.h>
int main(){
	int firstnum,secondnum;
	printf("Enter any two numbers:\n");
	scanf("%d %d",&firstnum,&secondnum);
	//subtraction of two numbers
		int sub=firstnum-secondnum;
		printf("The subtracted value is:%d",sub);
		
	//addition of two numbers
	int sum=firstnum+secondnum;
		printf("\nThe addition value is:%d",sum);
	
	//multiplication of two numbers	
		int mult=firstnum*secondnum;
		printf("\nThe multiplication is:%d",mult);
		
	//division of two numbers
		int divide=firstnum/secondnum;
		printf("\nThe division is:%d",divide);
		return 0;
}



		

