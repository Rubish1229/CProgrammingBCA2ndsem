//WAP to take input of 5 studnets as student roll, name and address using structure and store the info of student in file named as student.txt
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student{
	char name[50];
	char address[50];
	int roll;

	
};
int main()
{
	FILE *stdinfo;
	struct student std[3];
	int i,j;
	stdinfo=fopen("D:\CFILEHANDLING\\studentfile.txt","w");
	
	for(i=0;i<3;i++)
	{
			printf("The info of student:%d\n",i+1);
			printf("Enter the name of student:\n");
			scanf("%s",std[i].name,stdinfo);
			
			printf("Enter the address:\n");
			scanf("%s",std[i].address,stdinfo);
			
			printf("Enter the roll:\n");
			scanf("%d",&std[i].roll,stdinfo);
			
		}
		for(i=0;i<3;i++)
		{
			fprintf(stdinfo,"details of student:%d\n",i+1);
			fprintf(stdinfo,"The name of student is:%s.\n",std[i].name);
			fprintf(stdinfo,"The address of student is:%s.\n",std[i].address);
			fprintf(stdinfo,"The roll of student is:%d.\n",std[i].roll);
			printf("\n");
		}
		fclose(stdinfo);	
		
		return 0;
	}
	
	
