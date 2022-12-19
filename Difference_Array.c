#include <stdio.h>
#include <stdlib.h>

int main()
{

    int size1, size2, i, j;

    int arr1[100];
    int arr2[100];

    // int *arr1 = (int *)malloc(sizeof(arr1));
    // int *arr2 = (int *)malloc(sizeof(arr2));

    printf("Enter the size of set 1: ");
    scanf("%d", &size1);

    printf("Enter the size of set 2: ");
    scanf("%d", &size2);

    printf("Enter the values in set 1: ");
    for (i = 0; i < size1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the values in set 2: ");
    for (j = 0; j < size2; j++)
    {
        scanf("%d", &arr2[j]);
    }

    printf("Difference of two sets is ");
    for (i = 0; i < size1; i++)
    {
        for (j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                break;
            }
        }
        if (j == size2)
        {
            printf("%d ", arr1[i]);
        }
    }
}