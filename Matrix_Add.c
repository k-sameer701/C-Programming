#include <stdio.h>

int main(){

    int A[3][3], B[3][3], C[3][3] ;
    
    printf("Enter 9 numbers for first Matrix: ");
    
    for (int i=0; i<=2; i++){
        for(int j=0; j<=2; j++){
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter 9 numbers for first Matrix: ");
    
    for(int i=0; i<=2; i++){
        for(int j=0; j<=2; j++){
            scanf("%d", &B[i][j]);
        }
    }

    printf("Sum of Matrix: \n");

    for(int i=0; i<=2; i++){
        for(int j=0; j<=2; j++){
            C[i][j] = A[i][j] + B[i][j] ;
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    
}