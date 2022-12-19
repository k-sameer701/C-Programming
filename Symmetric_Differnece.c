#include <stdio.h>


void symmetricDiffrence(int arr1[], int arr2[], int n, int m)
{
	
	int i = 0, j = 0;
	while (i < n && j < m) {

		if (arr1[i] < arr2[j]) {
            printf("%d ", arr1[i]);
			//cout << arr1[i] << " ";
			i++;
		}
		else if (arr2[j] < arr1[i]) {
            printf("%d ", arr2[j]);
			//cout << arr2[j] << " ";
			j++;
		}
		else {
			i++;
			j++;
		}
	}
	while (i < n) {
        printf("%d ", arr1[i]);
		//cout << arr1[i] << " ";
		i++;
	}
	while (j < m) {
        printf("%d ", arr2[j]);
		//cout << arr2[j] << " ";
		j++;
	}
}


int main()
{
    int size1;
    printf("Enter the size: ");
    scanf("%d", &size1);
    int arr1[size1];

    printf("Enter the element in set A: ");
    for(int i=0; i<size1; i++){
        scanf("%d", &arr1[i]);
    }

    int size2;
    printf("Enter the size: ");
    scanf("%d", &size2);
    int arr2[size2];

    printf("Enter the element in set A: ");
    for(int i=0; i<size2; i++){
        scanf("%d", &arr2[i]);
    }

	symmetricDiffrence(arr1, arr2, size1, size2);

	return 0;
}
