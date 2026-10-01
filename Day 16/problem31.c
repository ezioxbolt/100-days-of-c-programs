#include <stdio.h>

int main()
{
    int n, remainder;
    int binary = 0;
    int place = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0)
    {
        remainder = n % 2;
        binary = binary + remainder * place;
        n = n / 2;
        place = place * 10;
    }

    printf("%d", binary);

    return 0;
}