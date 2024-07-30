#include<stdio.h>
void marks();
int main()
{
	void marks();
}
void marks()
{
	double (Math,English,Account,Microprocessor,Clanguage),per,total;
	printf("Enter the marks of Math:");
	scanf("%lf",&Math);
	printf("Enter the marks of English:");
	scanf("%lf",&English)
	printf("Enter the marks of Account:");
	scanf("%lf",&Account);
	printf("Enter the marks of Microprocessor:");
	scanf("%lf",&Microprocessor);
	printf("Enter the marks of Clanguage:");
	scanf("%lf",&Clanguage);
	total=Math+English+Account+Microprocessor+Clanguage;
	if(per>=90)
	{
		printf("Grade A ");
	}
else if(per>=80)
 {
 printf("Grade B);
}
else if("per>=70")
{
	printf("Grade C");
}
else if("per>=60")
{
	printf("Grade D");
}
else if("per>=50")
{
	printf("Grade E");
}
else if("per>=40"){
	printf("Grade F");
}
else{
	printf("Fail");
}


}






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




