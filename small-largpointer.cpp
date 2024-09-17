//	Smallest and largest element in pointer
//To find the smallest and largest elements in an array using pointers in C.
#include <stdio.h>
//
void findSmallestAndLargest(int *arr, int size, int *smallest, int *largest)
////int *arr: Pointer to the array
////int size: The size of the array.
////int *smallest: Pointer to an integer where the smallest value will be stored.
////int *largest: Pointer to an integer where the largest value will be stored.
//
//

 {
   //*smallest = *arr; and *largest = *arr;: Both smallest and largest are initialized to the value
//   // of the first element of the array (*arr is the first element).
    *smallest = *arr;
    *largest = *arr;


//    // Iteratation through the array using pointer arithmetic
    for (int i = 1; i < size; i++) 
    
//	//The function iterates over the array starting from the second element (i = 1), comparing each element with *smallest and *largest.
	{
        if (*(arr + i) < *smallest) {
            *smallest = *(arr + i);
//    //if (*(arr + i) < *smallest): If the element is smaller than the current smallest value, update smallest to the current element.


        }
        if (*(arr + i) > *largest) {
            *largest = *(arr + i);
//	//if (*(arr + i) > *largest): If the  element is larger than the current largest value, update largest to the current element.
//        }
//        
//    //here, iteration uses pointer arithmetic (*(arr + i)) to access array elements, where arr is a pointer
//	// to the first element and arr + i points to the i-th element.
    }
}
}
int main() {
    int arr[] = {100, 210, 50, 100, 500};
    int size = sizeof(arr) / sizeof(arr[0]);
//
//	//This calculates the number of elements in the array. sizeof(arr) gives the total size.
//	// and sizeof(arr[0]) gives the size of a single element by Dividing the total size by the element size gives the number of elements.
//	
    int smallest, largest;
//    // Variables to store the smallest and largest values
//
//    // Find the smallest and largest values
    findSmallestAndLargest(arr, size, &smallest, &largest);
//    //This function calls and passes the array, its size, and pointers to the smallest and largest variables
//
//    // Print the smalest and largest value.
    printf("The Smallest number: %d\n", smallest);
    printf("The Largest number: %d\n", largest);

    return 0;
}



