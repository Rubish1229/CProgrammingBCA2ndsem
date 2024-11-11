/*Write a program to print day name using switch case.*/
#include<stdio.h>
int main(){
	int day;
	char ch;

	do{
	printf("Enter day number:\n");
	scanf("%d",&day);
	
	switch(day)
	{
		case 1:
			printf("Sunday");
			break;
			
		case 2:
			printf("Monday");
			break;
			
		case 3:
			printf("Tuesday");
			break;
			
		case 4:
			printf("Wednesday");
			break;
			
		case 5:
			printf("Thursday");
			break;
			
		case 6:
			printf("Friday");
			break;
			
		case 7:	
			printf("Saturday");
			break;
			
		default:
			printf("INVALID");
		}
				printf("\n");
		printf("Do you want to continue  Y or N:\n");
		scanf(" %c",&ch);
	}
	while(ch=='Y' || ch=='y');	
		}
	
