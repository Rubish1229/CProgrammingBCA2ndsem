#include<stdio.h>
int main()
{
	int option;
	int num1;
	char choice;
	do{
	
	printf("Enter your value:");
	scanf("%d",&num1);
	
	printf("*********************");
	printf("\n");
	
	printf("Determining odd even and positive negative numbers.\n");
	printf("Options:");
	printf("\n");
	
	printf("1.Odd Even\n");
	printf("\n");
	
	printf("2.Positive Negative");
	printf("\n");
	
	printf("Enter your choice:");
	printf("\n");
	
	scanf("%d",&option);
	
	switch(option){
		
		case 1:
			if(num1%2==0){
				printf("%d is even number",num1);
			}
			else{
				printf("%d is odd number",num1);
			}
			
			break;
			
		case 2:
			if(num1>0){
				printf("%d is positive number",num1);
			}
			else if(num1==0){
				printf("%d is equal to zero",num1);
			}
			else{
				printf("%d is negative number",num1);
			}
			break;
			
			default:
				printf("Option is not available.");
				
		}
				
				
				printf("\n");
				printf("Do you want to continue?");
				printf("\n");
				printf("press 'y' for continue and other for exit.");
				
				scanf("%d",&choice);
	}while(choice=='Y'||choice=='y');
	
	
	

	return 0;
}

