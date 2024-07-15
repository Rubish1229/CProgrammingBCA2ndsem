#include<stdio.h>
int main(){
	int firstnum,secondnum,sum,mult,division,sub;
	char option;
		do{
	printf("Enter two values:\n");
	scanf("%d %d",&firstnum,&secondnum);


	sum=firstnum+secondnum;
	sub=firstnum-secondnum;
	mult=firstnum*secondnum;
	division=firstnum/secondnum;
	
	printf("The value of sum is:%d",sum);
	printf("\n");
	printf("The value of sub is:%d",sub);
	printf("\n");
	printf("The value of mult is:%d",mult);
	printf("\n");
	printf("The value of division is:%d",division);
	

	printf("\n");
	printf("Do you want to continue?");
	printf("\n");
	printf("Press y for continue or any other key for exit.");
	
	scanf(" %c",&option);
}while(option == 'Y' || option == 'y');
	
return 0;
	
}
