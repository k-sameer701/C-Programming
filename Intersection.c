/* Program in C to create two sets and perform the Intersection Operation on sets */

#include <stdio.h>
#include <stdlib.h>

int intersectionArray(int arr1[], int size1, int arr2[], int size2)
{
    int i = 0, j = 0;
    while (i < size1 && j < size2)
    {

        if (arr1[i] < arr2[j])
        {
            // printf("%d ", arr1[i]);
            i++;
        }
        else if (arr2[j] < arr1[i])
        {
            // printf("%d ", arr2[j]);
            j++;
        }
        if (arr1[i] == arr2[j])
        {
            printf("%d ", arr2[j]);
            j++;
            i++;
        }
    }

    while (i < size1)
    {
        // printf("%d ", arr1[i]);
        i++;
    }
    while (j < size2)
    {
        // printf("%d ", arr2[j]);
        j++;
    }
}

int main()
{

    int size1;
    printf("Enter number of elements for set A: ");
    scanf("%d", &size1);
    printf("Entered values in set A: ");

    // Dynamically allocate memory using malloc()
    int *arr1 = (int *)malloc(size1 * sizeof(int));
    for (int i = 0; i < size1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    int size2;
    printf("Enter number of elements for set B: ");
    scanf("%d", &size2);
    printf("Entered values in set B: ");

    // Dynamically allocate memory using malloc()
    int *arr2 = (int *)malloc(size2 * sizeof(int));
    for (int j = 0; j < size2; j++)
    {
        scanf("%d", &arr2[j]);
    }
    printf("Intersection of set A and B: ");
    intersectionArray(arr1, size1, arr2, size2);
    getchar();

    return 0;
}