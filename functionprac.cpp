





//return type with argument
//#include<stdio.h>
//int sum(int a,int b);
//int main()
//{
//	int num1,num2;
//	printf("Enter value:");
//	scanf("%d %d",&num1,&num2);
//	printf("The sum is:%d %d",sum(2,3),sum(4,5));
//	printf("%d",sum(3,4));
//	
//	sum (5,10);
//}
//int sum(int num1,int num2)
//{
//
//	int sum=num1+num2;
//	return sum;
//}






//return type without argument
//#include<stdio.h>
//
//int sum();
//int main()
//{
//	
//	printf("The sum is:%d",sum());
//}
//int sum()
//{
//	int num1,num2;
//	printf("Enter the num:");
//	scanf("%d %d",&num1,&num2);
//	int sum=num1+num2;
//	
//	return sum;
//}



















//without return type with argument
//#include<stdio.h>
//
//void sum(int,int);
//int main()
//{
//	int num1,num2;
//	printf("Enter value:");
//	scanf("%d %d",&num1,&num2);
//	sum(num1,num2);
//}
//void sum(int num1,int num2)
//{
//
//	
//	int sum=num1+num2;
//	printf("%d",sum);
//}







//retrun type without argument
//char mult();
//int main()
//{
//	char a;
//	
//	a=mult ();
//	
//	printf("The mult is:%c",a);
//}
//char mult()
//{
//	char num1,num2;
//	printf("Enter any two number:");
//	scanf("%c %c",&num1,&num2);
//	
//	
//		return num1;
//}



//without return type without argument
//include<stdio.h>
//void sum ();
//int main()
//
//{
//	sum();
//}
//void sum()
//{
//		int num1,num2;
//	printf("Enter any number:");
//	scanf("%d %d",&num1,&num2);	
//		int sum=num1+num2;
//		printf("The sum is:%d",sum);
//	
//}








//with return type with parameter
#include<stdio.h>

int oddeven(int num){

	if(num%2==0)
	{
		return 0;
	}
	else{
		return 1;
	}
}
int main()
{
	int a,num;
		printf("Enter the value for num:");
	scanf("%d",&num);
	
	a=oddeven(num);	
if(a==0)
	{
		printf("The number is even.");
	}
	else{
		printf("The number is odd.");
	}
}

















