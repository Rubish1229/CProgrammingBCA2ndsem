#include <stdio.h>

// Recursive function to calculate the sum of digits of a number
int sum_of_digits(int n) {
    if (n == 0) {
        return 0; // Base case: if the number is 0, the sum is 0
    } else {
        return (n % 10) + sum_of_digits(n / 10); // Recursive case
    }
}

int main() {
    int num, result;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle negative numbers
    if (num < 0) {
        num = -num;
    }

    // Call the recursive function
    result = sum_of_digits(num);

    // Output the result
    printf("The sum of digits of the number is: %d\n", result);

    return 0;
}

