/* 17. Write a program to accept a string and count the number of vowels present in this string.*/
#include<stdio.h>
#include<string.h>
int main()
{
	char string[100];
	int i,j;
	int count=0;
	printf("Enter any string:\n");
	scanf("%s",string);



	
	for(i=0;i<strlen(string);i++)
	{
		
			if(string[i]=='a'||string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u'||string[i]=='A'||string[i]=='E'||string[i]=='I'||string[i]=='O'||string[i]=='U'){
				
			
			count++;
		}
	
	}
	printf("number of vowls:%d",count);

	

}
