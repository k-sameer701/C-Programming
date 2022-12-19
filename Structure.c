#include <stdio.h>

struct student
{
    int roll;
    char name[20];
    long int mobile;
    float percentage;
};

int main()
{
    int size;
    printf("Enter the size: ");
    scanf("%d", &size);
    struct student arr[size];
    int index;

    printf("Enter the data of students: ");
    for (index = 0; index < size; index++)
    {
        scanf("%d %s %ld %f", &arr[index].roll, &arr[index].name, &arr[index].mobile, &arr[index].percentage);
    }

    printf("Student having percentage greater than 75 are ");
    for (index = 0; index < size; index++)
    {
        if (arr[index].percentage > 75)
        {
            printf("%d %s ", arr[index].roll, arr[index].name);
        }
    }
}