#include <stdio.h>

int fib(int n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}

int main()
{

    int n;
    printf("Enter how many terms of fibonacci series you want to see: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int y = fib(i);
        printf("%d ", y);
    }
}