#include <stdio.h>
#include <stdlib.h>

int insertion(int arr[], int size, int element, int capacity, int index)
{

    if (size >= capacity)
    {
        return -1;
    }
    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    return 1;
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

    int element;
    printf("Enter the element for insertion in array: ");
    scanf("%d", &element);

    int index;
    printf("Enter the index at which insertion is to be done in array: ");
    scanf("%d", &index);

    insertion(arr, size, element, 100, index);
    size = size + 1;
    printf("Array after insertion: ");
    display(arr, size);
}