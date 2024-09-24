#include <stdio.h>

void printArray(int arr[], int size) 
{
    for(int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void modifyArray(int arr[], int size) 
{
    for(int i = 0; i < size; i++) 
    {
        arr[i] = arr[i] * 2; // multiply each element by 2
    }
}

int main() 
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5; // specify the size of the array

    printf("Original array: ");
    printArray(arr, size);

    modifyArray(arr, size);

    printf("Modified array: ");
    printArray(arr, size);

    return 0;
}