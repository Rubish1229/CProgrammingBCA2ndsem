//Write a program to print day name using switch case.
#include<stdio.h>
int main()
{
	int day;
	printf("Enter day from (1-7):\n");
	scanf("%d",&day);
	
	switch(day)
	{
		case 1:
			printf("...SUNDAY...");
			break;
		case 2:
			printf("...MONDAY...");
			break;
		case 3:
			printf("...TUESDAY...");
			break;
		case 4:
			printf("...WEDNESDAY...");
			break;
		case 5:
			printf("...THURSDAY...");
			break;
		case 6:
			printf("...FRIDAY...");
			break;
		case 7:
			printf("...SATURDAY...");
			break;
		default :
			printf("INVLALID number. please enter between 1-7.");
	}
	return 0;
}
