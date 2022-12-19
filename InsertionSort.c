#include <stdio.h>

void insertionSort(int array[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int temp = array[i];
        int j;
        for (j = i - 1; j >= 0; j--)
        {
            if (array[j] > temp)
            {
                // shift
                array[j + 1] = array[j];
            }
            else
            {
                // stop
                break;
            }
        }
        array[j + 1] = temp;
    }
}

void printArray(int array[], int size)
{
    printf("Sorted array implemented using Insertion Sort: ");
    for (int index = 0; index < size; index++)
    {
        printf("%d ", &array[index]);
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

    insertionSort(arr, size);
    printArray(arr, size);
}