//WAP to take input of 10 numbers and find even and odd numbers, save even num iin even.txt and odd in odd.txt
#include<stdio.h>
int main()
{
	FILE *even;
	FILE *odd;
	char ch;
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int i;
	even=fopen("D:\\CFILEHANDLING\\even.txt","w");
	odd=fopen("D:\\CFILEHANDLING\\odd.txt","w");
	
	for(i=0;i<10;i++)
	{
		if(arr[i]%2==0)
		{
				fprintf(even," :%d",arr[i]);
				
		}
		else{
			fprintf(odd," :%d",arr[i]);
		}
}
	 fclose(even);
	 fclose(odd);
	 
    return 0; // Return 0 to indicate success
}

