#include <stdio.h>

int main() {
    int ages[27];
    int i, youngest, eldest, second_eldest;

    // Input the ages of 27 employees
    printf("Enter the ages of 27 employees:\n");
    for (i = 0; i < 27; i++) {
        printf("Employee %d: ", i+1);
        scanf("%d", &ages[i]);
    }

    // Initialize the youngest and eldest with the first age
    youngest = ages[0];
    eldest = ages[0];
    second_eldest = -1; // Initialize second eldest to a value that is not possible (will be updated)

    // Loop through the ages array to find the youngest and the eldest ages
    for (i = 1; i < 27; i++) {
        if (ages[i] < youngest) {
            youngest = ages[i];
        }
        if (ages[i] > eldest) {
            second_eldest = eldest; // Update second eldest before updating the eldest
            eldest = ages[i];
        } else if (ages[i] > second_eldest && ages[i] != eldest) {
            second_eldest = ages[i];
        }
    }

    // Output the results
    printf("\nThe youngest age is: %d\n", youngest);
    printf("The second eldest age is: %d\n", second_eldest);

    return 0;
}
