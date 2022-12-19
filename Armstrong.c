#include <stdio.h>
#include <math.h>

int countDigit(long n)
{
    if (n == 0)
    {
        return 1;
    }

    int count = 0;

    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    return count;
}

int main()
{

    int number, remainder;
    printf("Enter the number: ");
    scanf("%d", &number);

    int originalNumber = number;
    int countedNumber = countDigit(number);

    int sum = 0;
    while (originalNumber != 0)
    {
        // remainder contains the last digit
        remainder = originalNumber % 10;

        sum = sum + pow(remainder, countedNumber);

        // removing last digit from the orignal number
        originalNumber /= 10;
    }

    if (sum == number)
        printf("%d is an Armstrong number.", number);
    else
        printf("%d is not an Armstrong number.", number);
}
