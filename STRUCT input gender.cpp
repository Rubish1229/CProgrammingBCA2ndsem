//WAP to take input of 5 std as their roll num, name and gender and display only information of boys
#include<stdio.h>
struct student{
	int roll;
	char name[50];
	char gender;
};
int main()
{
	struct student std[3];
	int i,j;
	
	for(i=0;i<3;i++)
	{
		printf("The info of students:%d\n",i+1);
		printf("Enter the roll number:");
		scanf("%d",&std[i].roll);
		
		printf("Enter the name of student:");
		scanf("%s",std[i].name);
		
		printf("Enter the gender:");
		scanf(" %c",&std[i].gender);
	}
	
	for(i=0;i<3;i++)
	{
		if(std[i].gender=='M' || std[i].gender=='m')
		{
			printf("Name=%s\t",std[i].name);
			printf("Roll_num=%d\t",std[i].roll);
			printf("Gender=%c\n",std[i].gender);
		}
	}
	
}

