
//sorting array using pointer.

#include <stdio.h>
//This includes the standard input/output library in C.

//Function to perform bubble sort using pointers
void bubbleSort(int* array, int size) 
//int*array: A pointer to the first element of the array that needs to be sorted.
//int size: The number of elements in the array.
{
    int* ptr1;
    int* ptr2;
    //Here these pointers will be used to point to two adjacent elements in the array that need to be compared.
    int temp;
//    ////vacant memory to swap the value.
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++)
//		//The outer loop controls the number of passes needed (which is size - 1)---
//		// and the inner loop goes through the array elements to perform the comparisons and swaps.
		 {
            ptr1 = array + j;
            if (*ptr1 > *ptr2)
            ptr2 = array + j + 1;
//			//This logic sets ptr1 to point to the j element of the array and ptr2 to the next element (j + 1).
			//simply pointer 2 ko value is set next to pointer1 value.
				 {
//                // Swap the elements using pointers
                temp = *ptr1;
                *ptr1 = *ptr2;
                *ptr2 = temp;
            }
        }
    }
}


int main() {
    int array[100], n;
//	//int array[100]: Declares an array to store up to 100 integers.
//	//int n: This will store the number of elements entered by the user.
//		
//
//    // Asking the user to enter number of elements.
    printf("Enter the number of elements: ");
    scanf("%d", &n);
//
//    // asking to enter list of elements of array one by one.
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
//
//    // Sort the array using bubble sort with pointers
    bubbleSort(array, n);
//    //Bubble sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, 
//	//and swaps them if they are in the wrong order which is repeated until the list is sorted.
//	
//    // Display the sorted array
    printf("Sorted array: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(array + i));
//  //After sorting, the program prints the sorted array by dereferencing (a technique for accessing or manipulating data 
//  //stored in a memory location pointed to by a pointer. )the pointer (array + i), which points 
//  //to each element of the array turn by turn.
//
    }
    printf("\n");

    return 0;
    //main() function returns 0 to indicate that the program has executed successfully.
}









