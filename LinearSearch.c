#include <stdio.h>

void linearSearch(int array[], int size, int target)
{
    printf("Searching the Target...");
    for (int index = 0; index < size; index++)
    {
        if (array[index] == target)
        {
            printf("Target found: %d", target);
            return 1;
        }
        // else{                                  Don't write else condition here because it will also get executed.
        //     cout << "Target is not here.";
        // }
    }
}

int main()
{
    int size;
    int target;
    printf("Enter the size: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the values in an array: ");
    for (int index = 0; index < size; index++)
    {
        scanf("%d", &arr[index]);
    }
    printf("Enter the target: ");
    scanf("%d", &target);

    linearSearch(arr, size, target);

    return 0;
}