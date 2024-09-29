//Write a program to find the largest and smallest among three entered numbers and
//also display whether the identified largest/smallest number is even or odd.

#include<stdio.h>
void oddeven(int num){
	if(num%2==0)
	{
		printf("Even");
	}
	else{
		printf("Odd");
	}
}
int main()
{
	int num1,num2,num3;
	int largest,smallest;
	printf("Enter value of three numbers:\n ");
	scanf("%d %d %d",&num1,&num2,&num3);
	printf("Greatest number.\n");
	if(num1>num2 && num1>num3)
	 {
	 	printf("%d is greatest number.\n",num1);
	 	largest=num1;
	 }
	 else if(num2>num1 && num2>num3){
	 	printf("%d is greatest number.\n"),num2;
	 	largest=num2;
	 }
	 else{
	 	printf("%d is greatest number.\n",num3);
	 	largest=num3;
	 }
	oddeven(largest);

printf("\n");

	 printf("\nSmallest number:\n");
	if(num1<num2 && num1<num3)
	 {
	 	printf("%d is smallest number.\n",num1);
	 	smallest=num1;
	 }
	 else if(num2<num1 && num2<num3){
	 	printf("%d is smallest number.\n"),num2;
	 	smallest=num2;
	 }
	 else{
	 	printf("%d is smallest number.\n",num3);
	 	smallest=num3;
	 }
	 oddeven(smallest);
	 return 0;
}
