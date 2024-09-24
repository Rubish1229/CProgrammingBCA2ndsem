//WAP to take input of 5 students as there roolnum and name also sort them in ascending order and display it with structure.

#include<stdio.h>
struct student{
	int roll;
	char name[50];
};
int main()
{
 	struct student std[5],temp;
 	int i,j;

	for(i=0;i<5;i++)
	{
		printf("Enter the roll of student:\n",i+1);
		scanf("%d",&std[i].roll);
		
		printf("Enter the name of student:\n");
		scanf("%s",std[i].name);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			temp=std[i];
			std[i]=std[j];
			std[j]=temp;
		}
	}
	
	
	

printf("Student list in ascending order by roll number\n");
for(i=0;i<5;i++)
{
	printf("roll=%d\n",std[i].roll);
	printf("name=%s\n",std[i].name);
}
}
