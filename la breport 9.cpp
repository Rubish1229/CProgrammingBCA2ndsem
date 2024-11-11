//Write a program to determine whether the input character is capital or small letter,
//digits or special symbol.
#include<stdio.h>
int main()
{
	char input;
	
	printf("Enter input element:\n");
	scanf(" %c",&input);
	
	if(input>='A'&& input<='Z'){
		printf("CAPITAL LETTER.");
		
	}
	else if(input>='a' && input<='z'){
		printf("Small letter.");
	}
	else if(input>='0'&& input<='9')
	{
		printf("Digit.");
	}
	else{
		printf("Special symbol.");
	}
	
}

