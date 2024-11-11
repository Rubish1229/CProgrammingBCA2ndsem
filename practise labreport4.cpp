/*. Write a program to check whether the entered year is leap year or not (a year is
6. leap if it is divisible by 4 and divisible by 100 or 400.)
*/
#include<stdio.h>
int main()
{
	int date;
	printf("Enter any date:");
	
	scanf("%d",&date);
	if(date%400==0)
	{
		printf("LEAP YEAR");
	}
	 else if(date%100==0)
	 {
	 	printf("NOT A LEAP YEAR");
	}
	else if(date%4==0)
	{
		printf("LEAP YEAR");
	}
	else{
		printf("NOT A LEAP YEAR");
	}
	return 0;
}
