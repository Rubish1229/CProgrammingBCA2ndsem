#include<stdio.h>
int main(){
	int num1,num2,num3;
	printf("Enter the value of three numbers:\n");
	scanf("%d %d %d",&num1,&num2,&num3);
	
	if(num1>num2){
		if(num1>num3){
			printf("Num1 is greatest.");
		}
		
		else{
			printf("Num2 is greatest.");
		}
	}
	
	else{
		if(num2>num3){
			printf("Num2 is greatest.");
		}
		else{
			printf("Num3 is greatest.");
		}
	}
	return 0;
	
}
