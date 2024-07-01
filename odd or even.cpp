////to print odd or even
#include<stdio.h>
int main(){

	int num;
	char option;
	do{
	
	printf("Enter the value:");
	scanf("%d",&num);
	
		if(num%2==0){
		printf("It is an even number");
	}
		else{
		printf("It is an odd number");
	}
	printf("\n");
	printf("Do you want to continue?");
	printf("\n");
	printf("Press y for continue or any other key for exit.");
	
	scanf(" %c",&option);
}while(option == 'y' || option == 'y');
	
return 0;
}


////to print odd or even
//#include<stdio.h>
//int main(){
//
//	int num;
//	printf("Enter the value:");
//	scanf("%d",&num);
//	
//	if(num%2==0){
//		printf("%d: is an even number");
//	}
//	else{
//		printf("%d:is an odd number");
//	}
//return 0;
//}

