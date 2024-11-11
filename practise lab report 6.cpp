/*Write a program to check number is Armstrong or not.
(Hint: A number is Armstrong if the sum of cubes of individual digits of a number
is equal to the number itself).*/
#include<stdio.h>
int main()
{
	int rem,temp,arm=0,num;
	printf("Enter any number:\n");
	scanf("%d",&num);
	temp=num;
	while(10num>0)
	{
		rem=num%10;
		arm=arm+(rem*rem*rem);
		num=num/10;
		
	}
	if(temp==arm)
	{
		printf("ARMSTRONG NUMBER");
	}
	else{
		printf("NOT A ARMSTRONG NUMBER");
	}
}
