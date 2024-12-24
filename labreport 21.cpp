#include <stdio.h>

void swap_by_value(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("After swapping (Call by Value): a = %d, b = %d\n", a, b);
}

void swap_by_reference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;

    printf("Enter two integers:\n");
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);

    // Call by value
    printf("\nBefore swapping (Call by Value): a = %d, b = %d\n", a, b);
    swap_by_value(a, b);
    printf("Original values after Call by Value: a = %d, b = %d\n", a, b);

    // Call by reference
    printf("\nBefore swapping (Call by Reference): a = %d, b = %d\n", a, b);
    swap_by_reference(&a, &b);
    printf("After swapping (Call by Reference): a = %d, b = %d\n", a, b);

    return 0;
}

