//WAP to print compound interest.
#include<stdio.h>
int main()
{
int CI,P,R,t;
/*A=	final amount
P=initial principal balance
r=interest rate
n=number of times interest applied per time period
t=number of time periods elapsed*/	

printf("Enter value of principal balance:");
scanf("%d",&P);
printf("Enter value of interest rate:");
scanf("%d",&R);

printf("Enter number of time periods:");
scanf("%d",&t);

CI=P*(pow(1+R/100)^t;
printf("The compound interest is:%f",CI);


}
