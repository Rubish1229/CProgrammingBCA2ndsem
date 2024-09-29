//Write a program to check number is Armstrong or not.
//(Hint: A number is Armstrong if the sum of cubes of individual digits of a number
//is equal to the number itself).
#include<stdio.h>
int main()
{
	int num,arm=0,temp,rem;
	printf("Enter any number:\n");
	scanf("%d",&num);
	
	temp=num;
	while(num>0)
	{
		rem=num%10;
		arm=arm+(rem*rem*rem);
		num=num/10;
	}
	if(temp==arm)
	{
		printf("Armstrong number.");
	}
	else{
		printf("Not a armstrong number.");
	}
	return 0;
}
