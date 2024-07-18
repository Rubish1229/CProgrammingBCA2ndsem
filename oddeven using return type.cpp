//program to determine whether a number is odd or even using return type function without paramater
#include<stdio.h>
int oddeven();
int num;

int main()
{
	if(oddeven()==0)
	{
		printf("The number is even.");
	}
	else{
		printf("The number is odd");
	}
	return 0;
	
}
int oddeven()
{
	printf("Enter any number:");
	scanf("%d",&num);
		if(num%2==0){
			return 0;
		}

}


