#include <stdio.h>
// #include"swaping.h"

void selectionSort(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (array[j] < array[minIndex])
            {
                minIndex = j;
            }
        }
        // swap(array[minIndex] , array[i]);
        int temp = array[minIndex];
        array[minIndex] = array[i];
        array[i] = temp;
        // cout << array[i] << " ";
    }
}

void printArray(int array[], int size)
{
    printf("The sorted array implementd using Selection Sort: ");
    for (int index = 0; index < size; index++)
    {
        printf("%d ", array[index]);
    }
}

int main()
{
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the values in an array: ");

    for (int index = 0; index < size; index++)
    {
        scanf("%d", &arr[index]);
    }

    selectionSort(arr, size);
    printArray(arr, size);
}