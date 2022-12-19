#include <stdio.h>

int main()
{
    int size;
    printf("Enter the size: ");
    scanf("%d", &size);
    int arr[size];

    printf("Enter the elements in array: ");
    for (int index = 0; index < size; index++)
    {
        scanf("%d", &arr[index]);
    }

    for (int index = 1; index < size; index++)
    {
        if (arr[0] < arr[index])
        {
            arr[0] = arr[index];
        }
    }

    printf("Largest element in array: %d", arr[0]);
    // return 0;
}