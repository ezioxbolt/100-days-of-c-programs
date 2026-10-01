#include <stdio.h>

int main()
{
    int n, digit;
    int reverse = 0;
    int result = 0;
    int place = 1;

    printf("Enter a binary number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        digit = n % 10;

        if (digit == 0)
        {
            digit = 1;
        }
        else
        {
            digit = 0;
        }

        reverse = reverse * 10 + digit;

        n = n / 10;
    }

    while (reverse != 0)
    {
        digit = reverse % 10;
        result = result * 10 + digit;
        reverse = reverse / 10;
    }

    printf("%d", result);

    return 0;
}