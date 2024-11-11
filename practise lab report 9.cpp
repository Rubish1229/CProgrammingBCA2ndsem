/*Write a program to check whether a date is valid or not.*/
#include<stdio.h>
int main()
{
	int dd,mm,yy;
	printf("Enter any date  (day/ month/ year):");
	scanf("%d %d %d",&dd,&mm,&yy);
	
	if(yy>=1000 && yy<=2024){
		if(mm>=1 && mm<=12)
		{
			if((mm==1 ||mm==3 ||mm==5 ||mm==7 ||mm==8 ||mm==10 ||mm==12) && (dd>=1 && dd<=31))
			{
				printf("VAld date\n");
			}
			else if((mm==4 ||mm==6 ||mm==9 ||mm==11)&&(dd>=1 && dd<=31))
			{
				printf("VAld date\n");
			}
				else if((mm==2)&&(dd>=1 &&dd<=28))
				{
					printf("VAld date\n");
				}
				else if((dd=29)&&(yy%400==0) || (yy%4==0 &&yy%100!=0)){
					printf("VAlid date.(A leap year)");
				}
			}
			}
		
	
	else{
		printf("INVALID YEAR");
	}
}
