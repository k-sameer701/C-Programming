#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b, y;
    printf("Enter the number: ");
    char c;
    scanf("%d %c %d", &a, &c, &b);
    switch (c)
    {
    case '+':
        y = a + b;
        printf("%d", y);
        break;
    case '*':
        y = a * b;
        printf("%d", y);
        break;
    case '-':
        y = a - b;
        printf("%d", y);
        break;
    case '%':
        y = a % b;
        printf("%d", y);
        break;
    case '/':
        y = a / b;
        printf("%d", y);
        break;
    default:
        printf("Out of Range");
    }
}