#include<stdio.h>
int main(){
// name,roll,faculty,age,email,section
int roll,age;
char section;
char name[25],faculty[25],email[50];

printf("Enter your Name:");
scanf("%s",&name);
printf("\nEnter Roll:");
scanf("%d",&roll);
printf("\nEnter faculty:");
scanf("%s",&faculty);
printf("\nEnter age:");
scanf("%d",&age);
printf("\nEnter email:");
scanf("%s",&email);
printf("\nEnter section:");
scanf(" %c",&section);
//the function should skip any whitespace characters (like spaces, tabs, or newlines) before reading the actual data

printf("Your name is:%s",name);



}
