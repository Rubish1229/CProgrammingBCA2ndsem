//#include<stdio.h>
//#include<math.h>
//
//void find_root(float a,float b,float c)
//{
//	float discrm,root_1,root_2,real_part,img_part;
//	
//	//calculate value for discriminant
//	discrm=b*b-(4*a*c);
//	
//	//calculate the value for roots
//	if(discrm  > 0)
//	{
//		root_1=(-b-sqrt(discrm))/2*a;
//		root_2=(-b+sqrt(discrm))/2*a;
//		printf("The two roots are:%.2f and %.2f",root_1,root_2);
//		
//	}
//	else if(discrm==0){
//		root_1=-b/2*a;
//		printf("the one root is:%.2f",root_1);
//	}
//	else{
//		real_part=-b/2*a;
//		img_part=sqrt(-discrm)/2*a;
//		printf("The numbers are:%.2f + %.2fi and %.2f + %.2fi",real_part,img_part,real_part,img_part);
//	}
//	}
//	int main()
//	{
//		float a, b,c;
//		printf("FOr a:");
//		scanf("%f",&a);
//		printf("For b:");
//		scanf("%f",&b);
//		printf("For c:");
//		scanf("%f",&c);
//		
//		if(a==0)
//		{
//			printf("The nuber is invalid.");
//		}
//		else{
//			find_root(a,b,c);
//		}
//		
//		
//	}

#include<stdio.h>
int main()
{
	int age[27];
	int i,eldest,youngest,s_eldest;
	
	for(i=0;i<27;i++)
	{
		printf("Employee:%d::\t",i+1);
		scanf("%d",&age[i]);
	}
	
	youngest=age[0];
	eldest=age[0];
	s_eldest=-1;
	
	for(i=1;i<27;i++)
	{
		if(age[i]<youngest)
		{
			youngest=age[i];
		}
		else if(age[i]>eldest)
		{
			s_eldest=eldest;
			eldest=age[i];
		}
		else if(age[i]>s_eldest && age[i] !=eldest)
		{
			s_eldest=age[i];
		}
	}
	printf("The youngest is:%d",youngest);
	printf("The s_largest is :%d",s_eldest);
}
