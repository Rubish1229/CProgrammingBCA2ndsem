/*Write a program to find the factorial of a number. 
*/
#include<stdio.h>
int main()
{
	int num,fact=1,i;
	printf("Enter any number:");
	scanf("%d",&num);
	
	for(i=num;i>=1;i--)
	{
		fact=fact*i;	
	}
	printf("The factorila is:%d",fact);
}
