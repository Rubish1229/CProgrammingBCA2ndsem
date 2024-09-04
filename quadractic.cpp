#include <stdio.h>
#include <math.h>

void find_roots(float a, float b, float c) {
    float discriminant, root1, root2, real_part, imaginary_part;

    // Calculate the discriminant
    discriminant = b * b - 4 * a * c;

    // Check the nature of the roots
    if (discriminant > 0) {
        // Two distinct real roots
        root1 = (-b - sqrt(discriminant)) / (2 * a);
        root2 = (-b + sqrt(discriminant)) / (2 * a);
        printf("Two distinct real roots: %.2f and %.2f\n", root1, root2);
    } else if (discriminant == 0) {
        // One real root (repeated)
        root1 = -b / (2 * a);
        printf("One real root: %.2f\n", root1);
    } else {
        // Two complex roots
        real_part = -b / (2 * a);
        imaginary_part = sqrt(-discriminant) / (2 * a);
        printf("Two complex roots: %.2f + %.2fi and %.2f - %.2fi\n",
               real_part, imaginary_part, real_part, imaginary_part);
    }
}

int main() {
    float a, b, c;

    // Input coefficients from the user
    printf("Enter coefficient a: ");
    scanf("%f", &a);
    printf("Enter coefficient b: ");
    scanf("%f", &b);
    printf("Enter coefficient c: ");
    scanf("%f", &c);

    // Check if 'a' is zero (not a quadratic equation)
    if (a == 0) {
        printf("The equation is not quadratic.\n");
    } else {
        // Find and display the roots
        find_roots(a, b, c);
    }

    return 0;
}
