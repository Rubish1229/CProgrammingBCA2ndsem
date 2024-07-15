//write a program to find number is greater among two number...
#include<stdio.h>
int main(){
	int num1,num2;
	printf("Enter the value:\n");
	scanf("%d %d",&num1,&num2);
	
	if(num1>num2){
		printf("The num1 is greater.");
	}
	else{
		printf("The num2 is greater.");
	}
	
	return 0;
}
