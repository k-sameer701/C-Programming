#include <stdio.h>

int main()
{
    int A[3][3], B[3][3], C[3][3];

    printf("Enter 9 numbers for first Matrix: ");

    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter 9 numbers for first Matrix: ");

    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    //
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            int sum = 0;
            for (int k = 0; k <= 2; k++)
            {
                sum = sum + A[i][k] * B[k][j];
            }
            C[i][j] = sum;
        }
    }

    printf("Multiplication of Matrix : \n");
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
}