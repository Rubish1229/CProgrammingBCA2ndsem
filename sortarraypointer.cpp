

#include <stdio.h>

// Function to perform bubble sort using pointers
void bubbleSort(int* array, int size) {
    int* ptr1;
    int* ptr2;
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            ptr1 = array + j;
            ptr2 = array + j + 1;
            if (*ptr1 > *ptr2) {
                // Swap the elements using pointers
                temp = *ptr1;
                *ptr1 = *ptr2;
                *ptr2 = temp;
            }
        }
    }
}

int main() {
    int array[100], n;

    // Ask the user for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Sort the array using bubble sort with pointers
    bubbleSort(array, n);

    // Print the sorted array
    printf("Sorted array: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(array + i));
    }
    printf("\n");

    return 0;
}
//```
//
//### Explanation:
//1. **Pointer Arithmetic**:
//   - The array elements are accessed and manipulated using pointers (e.g., `ptr1 = array + j`).
//   - Pointer arithmetic allows us to move through the array by adding an offset to the base pointer (`array`).
//
//2. **Bubble Sort Algorithm**:
//   - The bubble sort algorithm compares adjacent elements in the array. If the first is greater than the second, they are swapped.
//   - The sorting continues until the entire array is sorted.
//
//3. **Pointer-Based Swapping**:
//   - Swapping of elements is performed using pointer dereferencing (`*ptr1` and `*ptr2`).
//
//### Key Points:
//- This program emphasizes pointer arithmetic for array manipulation and sorting.
//- Using pointers for swapping and comparison gives more direct control over memory management, showcasing the power of pointers in C.
//
//This program can be compiled and run in any standard C environment.
