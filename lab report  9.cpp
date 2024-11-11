//Write a program to check whether a date is valid or not.

//year range= {1900-9999}-valid year
//
//1)for month =1<=month<=12
//2)jan,march,may,july,aug,oct,dec==1<=dd<=31
//3)april,june,sept,nov  1<=dd<=30
//4)febraury-1<=dd<=28
//---leap year=yy%400==0 ,yy%4==0, yy%100==0

#include<stdio.h>
int main()
{
	int dd,mm,yy;
	printf("Enter Date(dd/mm/yy):\n");
	scanf("%d %d %d",&dd,&mm,&yy);
	if(1000<=yy && yy<=2024)
	{
		if(1<=mm && mm<=12)
		{
			if((mm==1||mm==3||mm==5||mm==7||mm==8||mm==10||mm==12) &&(1<=dd && dd<=31))
			{
				printf("valid date.");
			}
			else if((mm==4||mm==6||mm==9||mm==11) && (1<=dd && dd<=30))
			{
				printf("Valid date.");
			}
			else if((mm==2)&& (1<=dd&&dd<=28))
			{
				printf("Valid date.");
			}
			else if((dd==29) && (yy%400==0 || yy%4==0 &&yy%100!=0))
			{
				printf("Valid date ( A leap year.)");
			}
			
		}
		}
		
		else{
			printf("Invalid date.");
		}

	
}
