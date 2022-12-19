#include <stdio.h>

// using namespace std;

int binarySearch(int arr[], int size, int key)
{

    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        // Go to right wala part
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{

    int size;
    int key;
    printf("Enter the size: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the values in an array: ");

    for (int index = 0; index < size; index++)
    {
        scanf("%d", &arr[index]);
    }

    printf("Enter the target: ");
    scanf("%d", &key);

    int position = binarySearch(arr, size, key);
    printf("Index of Key is: %d", position);
}