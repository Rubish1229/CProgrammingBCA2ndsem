//Write a program to take input of 30 employees as employeeid, employeename,
// employeesalary and employeeaddress, and display the information of employee of address Pokhara using structure.
#include<stdio.h>
#include<string.h>
struct employee{
	char empid[20];
	char empname[20];
	char empsalary[20];
	char empaddress[20];
};

int main()
{
	struct employee emp[50];
	int i;
	
	for(i=0;i<3;i++)
	{
		printf("Employee details:\n");
		printf("Enter id of employee:\n");
		scanf("%s",emp[i].empid);
		printf("Enter name of employee:\n");
		scanf("%s",emp[i].empname);
		printf("Enter salary of employee:\n");
		scanf("%s",emp[i].empsalary);
		printf("Enter address of employee:\n");
		scanf("%s",emp[i].empaddress);
		
	}
	printf("list of employee address Pokhara:\n");
	for(i=0;i<=3;i++)
	{
		if(strcmp(emp[i].empaddress,"pokhara")==0)
		{
			printf("empID=%s\n",emp[i].empid);
			printf("empNAME=%s\n",emp[i].empname);
			printf("empSALARY=%s\n",emp[i].empsalary);
			printf("empADDRESS=%s\n",emp[i].empaddress);
			printf("------\n");
		}
	}
	
}
