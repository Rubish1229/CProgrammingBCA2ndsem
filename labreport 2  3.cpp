#include <stdio.h>

// Function to find the maximum of two numbers
int findMax(int a, int b) {
    return (a > b) ? a : b;
}

// Function to find the minimum of two numbers
int findMin(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int num1, num2, max, min;

    // Input two numbers from the user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Call the functions to find max and min
    max = findMax(num1, num2);
    min = findMin(num1, num2);

    // Print the results
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);

    return 0;
}
