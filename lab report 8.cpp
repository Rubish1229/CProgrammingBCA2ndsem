//Write a program to check whether a number is positive, negative or zero using
//switch case.
#include<stdio.h>
int main() {
    int num;
    // Input from user
    printf("Enter a number:");
    scanf("%d", &num);

    // Switch case to check the number
    switch ((num > 0) - (num < 0)) {
        case 1:
            printf("%d is positive number.\n",num);
            break;
        case -1:
            printf("%d is negative number.\n",num);
            break;
        case 0:
            printf("%d is zero\n.",num);
            break;
        default:
            printf("Invalid input.\n");
    }

    return 0;
}
