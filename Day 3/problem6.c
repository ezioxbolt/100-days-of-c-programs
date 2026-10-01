#include <stdio.h>

int main()
{
    int a, b, meow;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    meow = a;
    a = b;
    b = meow;

    printf("After swap: %d %d", a, b);

    return 0;
}