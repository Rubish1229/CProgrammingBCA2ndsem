/*Write a program to determine whether the input character is capital or small letter,
digits or special symbol.*/
#include<stdio.h>
int main(){
	char ch;
	char specialch[10]={'!','@','#','$','%','^','&','*'};
	printf("Enter  any input:\n");
	scanf(" %ch",&ch);
	
	if(ch>='A'&& ch<='Z')
	{
		printf("Captial letter.");
	}
	else if(ch>='a'&& ch<='z')
	{
		printf("Small letter.");
	}
	else if(ch>='0'&& ch<='9')
		{
		printf("Digits.");
		}
	else{
		printf("Symols.");
	}	
	}
