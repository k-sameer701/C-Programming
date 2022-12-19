#include <stdio.h>

void bubbleSort(int array[], int size)
{
    for (int i = 1; i < size; i++)
    {
        // for round 1 to n-1
        for (int j = 0; j < size - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                // swap(array[j],array[j+1]);
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void printArray(int array[], int size)
{
    printf("Sorted array implemented using Bubble Sort: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d", array[i]);
    }
}

int main()
{
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    int arr[size];

    printf("Enter the elements in an array: ");
    for (int index = 0; index < size; index++)
    {
        scanf("%d", &arr[index]);
    }

    bubbleSort(arr, size);
    printArray(arr, size);
}