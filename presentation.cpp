//presentation

#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int n;
    
    // Input number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Input array elements
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Sort the array
    bubbleSort(arr, n);
    
    // Print the sorted array
    printf("Sorted array: \n");
    printArray(arr, n);
    
    return 0;
}

//#include <stdio.h>
//
//void findSmallestAndLargest(int *arr, int size, int *smallest, int *largest) {
//    // Initialize the smallest and largest pointers to the first element
//    *smallest = *arr;
//    *largest = *arr;
//
//    // Iterate through the array using pointer arithmetic
//    for (int i = 1; i < size; i++) {
//        if (*(arr + i) < *smallest) {
//            *smallest = *(arr + i);
//        }
//        if (*(arr + i) > *largest) {
//            *largest = *(arr + i);
//        }
//    }
//}
//
//int main() {
//    int arr[] = {10, 20, 5, 25, 8};
//    int size = sizeof(arr) / sizeof(arr[0]);
//
//    int smallest, largest;
//
//    // Find the smallest and largest values
//    findSmallestAndLargest(arr, size, &smallest, &largest);
//
//    // Print the results
//    printf("Smallest: %d\n", smallest);
//    printf("Largest: %d\n", largest);
//
//    return 0;
//}
//

