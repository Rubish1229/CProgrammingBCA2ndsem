//WAP to take input of 3 employees as their employ-ID. department, salary, display the information of employee whose department is JAVA.

//gets use inplace of  scanf.

#include<stdio.h>
#include<string.h>
struct employee{
	char department[50];
	int salary;
	char id[50];
	
};
int main()
{
	struct employee emp[50];
	int i,j;
	
	for(i=0;i<3;i++)
	{
		
		
				printf("The list of employee:%d\n",i+1);
			printf("Enter the id of employee:\n");
			scanf("%s",emp[i].id);
			
			printf("Enter the salary:\n");
			scanf("%d",&emp[i].salary);
			
			printf("Enter the department:\n");
			scanf("%s",emp[i].department);
			
		}
		for(i=0;i<3;i++)
		{
			if(strcmp(emp[i].department,"JAVA_DEVELOPER")==0){
			
				printf("ID=%s",emp[i].id);
				printf("Salary=%d",emp[i].salary);
				printf("Department=%s",emp[i].department);
			}
		}
		
	}
	
	
	
