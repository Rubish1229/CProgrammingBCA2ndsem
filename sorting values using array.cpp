o//pairing an array to function
//array passing as a paremeter

#include<stdio.h>
#include<stdlib.h> // for qsort

void printArray(int arr[],int size);
void sortArray(int arr[],int size);

int main()
{
    int array[]= {4,8,2,0,1};
    int size = sizeof(array)/sizeof(array[0]);
    
    sortArray(array,size);
    printArray(array,size);
    return 0;
}

void printArray(int arr[], int size)
{
    for(int i=0; i < size; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
}

int compare(const void *a, const void *b)
{
    return ((int)a - (int)b);
}

void sortArray(int arr[], int size)
{
    qsort(arr, size, sizeof(int), compare);
}

