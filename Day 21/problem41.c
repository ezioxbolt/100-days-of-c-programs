#include <stdio.h>

int main()
{
    int n, original;
    int first, last;
    int digits = 1;
    int middle;
    int result;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    last = n % 10;

    while (n >= 10)
    {
        n = n / 10;
        digits = digits * 10;
    }

    first = n;

    middle = (original % digits) / 10;

    result = last * digits + middle * 10 + first;

    printf("%d", result);

    return 0;
}