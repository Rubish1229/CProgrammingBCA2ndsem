#include<stdio.h>
int main(){
// name,roll,faculty,age,email,section
int roll;
int age;
char section;
char name[25],faculty[25],email[50];

printf("Enter your Name:");
scanf("%s",&name);
printf("\n");
printf("Enter Roll:");
scanf("%d",&roll);
printf("\n");
printf("Enter faculty:");
scanf("%s",&faculty);
printf("\n");
printf("Enter age:");
scanf("%d",&age);
printf("\n");
printf("Enter email:");
scanf("%s",&email);
printf("\n");
printf("Enter section:");
scanf(" %c",&section);
//the function should skip any whitespace characters (like spaces, tabs, or newlines) before reading the actual data
printf("\n");
printf("\n");
printf("Your name is:%s",name);
printf("\n");
printf("Roll:%d",roll);
printf("\n");
printf("Faculty:%s",faculty);
printf("\n");
printf("Age:%d",age);
printf("\n");
printf("Email id:%s",email);
printf("\n");
printf("section:%c",section);

return 0;



}