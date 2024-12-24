#include <stdio.h>

// Function to find the maximum of two numbers
int find_max(int a, int b) {
    return (a > b) ? a : b;
}

// Function to find the minimum of two numbers
int find_min(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Call the functions and display the results
    int max = find_max(num1, num2);
    int min = find_min(num1, num2);

    printf("The maximum of the two numbers is: %d\n", max);
    printf("The minimum of the two numbers is: %d\n", min);

    return 0;
}

