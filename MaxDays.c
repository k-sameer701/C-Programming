#include <stdio.h>
#include <conio.h>

// Write a program (WAP) to see maximum days in a month

int main()
{
    // clrscr();    <--- If you are using Turbo C
    int month, year;
    printf("Enter the Month and Year: ");
    scanf("%d %d", &month, &year);
    if ((month == 1) || (month == 3) || (month == 5) || (month == 7) || (month == 8) || (month == 10) || (month == 12))
    {
        printf("Maximum no. of days are 31");
    }
    else if ((month == 4) || (month == 6) || (month == 9) || (month == 11))
    {
        printf("Maximum no. of days are 30");
    }
    else if (month == 2)
    {
        if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
        { // Leap year condition
            printf("Maximum no. of days are 29");
        }
        else
        {
            printf("Maximum no. of days are 28");
        }
    }
    else
    {
        printf("Pehli fursat mai Nikal...");
    }
    // getch();     <--- If you are using Turbo C
}