#include <stdio.h>
#include <math.h>

int main()
{
    float p, r, t;
    float simple_interest, compound_interest;

    printf("Enter principal, rate and time: ");
    scanf("%f %f %f", &p, &r, &t);

    simple_interest = (p * r * t) / 100;

    compound_interest = p * (pow(1 + r / 100, t) - 1);

    printf("Simple Interest = %.2f\n", simple_interest);
    printf("Compound Interest = %.2f", compound_interest);

    return 0;
}