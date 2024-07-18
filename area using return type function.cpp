//area of circle using return type function with paramter
#include<stdio.h>
double area(double);

int main()
{
	double radius;
	printf("Enter the radius:\t");
	scanf("%lf",&radius);
	
	printf("The area of circle is:%lf",area(radius));
	return 0;
}

 double area(double x)

{
	double total;
	total=3.14*x*x;
	
	return total;
}
