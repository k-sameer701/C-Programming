#include <stdio.h>
#include <conio.h>

// Check whether the character is a VOWEL OR A CONSONANT before that check it's a ALPHABET OR NOT.

int main()
{
    // clrscr();    <--- If you are using Turbo C
    char c;
    printf("Enter the character: ");
    scanf("%c", &c);
    if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
    {

        switch (c)
        {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'O':
        case 'o':
        case 'u':
        case 'U':
            printf("VOWEL");
        default:
            printf("CONSONANT");
        }
    }
    else
    {
        printf("Abe alphabet daal jake...");
    }

    // getch();     <--- If you are using Turbo C
}