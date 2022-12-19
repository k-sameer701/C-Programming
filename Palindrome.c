#include <stdio.h>
#include <conio.h>

int main()
{
    // clrscr();
    int number, reversed = 0, remainder, originalNumber;
    printf("Enter an integer: ");
    scanf("%d", &number);
    originalNumber = number;

    // reversed integer is stored in reversed variable
    while (number != 0)
    {
        remainder = number % 10;
        reversed = reversed * 10 + remainder;
        number = number / 10;
    }

    // palindrome if orignal and reversed are equal
    if (originalNumber == reversed)
        printf("%d is a palindrome. %d", originalNumber);
    else
        printf("%d is not a palindrome. %d", originalNumber);

    // getch();
}