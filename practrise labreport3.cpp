//Write a program to compute grade of students using if else adder. The grades are
/*assigned as followed:
Marks Grade
marks<50 F
50=marks< 60 C
60=marks<70 B
70=marks<80 B+
80=marks<90 A
90=mars= 100 A+*/
#include<stdio.h>
int main(){
	int marks;
	printf("enter marks:");
	scanf("%d",&marks);
	if(marks>=90 && marks<=100){
		printf("Grade A+");
	}
	else if(marks>=80 && marks<90)
	{
		printf("Grade A");	
		}
		else if(marks>=70 && marks<80)
		{
			printf("Grade B+");
		}
		else if(marks>=60 && marks<70)
		{
			printf("Grade B");
		}
		else if(marks>=50 && marks<60){
			printf("Grade C");
		}
		else{
			printf("fail");
		}
}
