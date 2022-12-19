#include <stdio.h>
#include <stdlib.h>

int indexDelete(int arr[], int size, int index)
{

    for (int i = index; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }
}

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{

    int size;

    int arr[100];

    printf("Enter the size of array: ");
    scanf("%d", &size);

    printf("Enter the values in array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int index;
    printf("Enter the index at which deletion is to be done in array: ");
    scanf("%d", &index);

    indexDelete(arr, size, index);
    size = size - 1;
    printf("Array after deletion: ");
    display(arr, size);
}