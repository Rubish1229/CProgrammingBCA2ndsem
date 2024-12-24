#include <stdio.h>

// Function to reverse a number using recursion
void reverse_number(int n) {
    if (n == 0) {
        return; // Base case: if the number is 0, stop recursion
    } else {
        printf("%d", n % 10); // Print the last digit
        reverse_number(n / 10); // Recursive call with the remaining digits
    }
}

int main() {
    int num;

    // Input the number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Handle negative numbers
    if (num < 0) {
        printf("-");
        num = -num; // Make the number positive for reversal
    }

    printf("The reverse of the number is: ");
    reverse_number(num);
    printf("\n");

    return 0;
}

