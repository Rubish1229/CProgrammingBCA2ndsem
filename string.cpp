//#include<stdio.h>
//#include<string.h>
//#include<ctype.h>
//int main(){
//	char name[50]="deerwalk";
//	char ch;
//	int length=strlen(name);
//	int i,count;
//	
//	for(i=0;i<=20;i++)
//	{
//		char ch=tolower(name[i]);
//		
//		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
//		{
//			printf("The vowels are: %c\n",ch);
//			count++;
//		}
//		
//}
//}




//space=\0
//strcat(_,_)
//#include<stdio.h>
//int main(){
//	char f_name[20]="Sher";
//	char m_name[20]="Bahadur";
//	char l_name[]="Deuba";
//	printf("The short name of:\n");
//	printf(" %c.",f_name[0]);
//	printf("%c ",m_name[0]);
//	printf("%s",l_name);
//	
//}


#include<stdio.h>
int main()
{
	char f_name[50], m_name[50], l_name[50];
	printf("Enter your first name:\n");
	scanf("%s.",&f_name);
	
	printf("Enter your middle name:\n");
	scanf("%s",&m_name);
	
	printf("Enter your last name:\n");
	scanf(" %s",&l_name); 
	
	printf("\n");
	printf("Your short name is:");
	printf("\t\t%c.%c %s",f_name[0],m_name[0],l_name);
}


