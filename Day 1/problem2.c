#include <stdio.h>
int main ()
{  float a, b, sum, difference, product, quotient;

    printf("enter two no.s:");
    scanf("%f %f", &a, &b);

    sum = a + b;
    difference = a - b;
    product = a*b;
    
    printf("sum of the no.s = %f\n", sum);
    printf("difference of the no.s = %f\n", difference);
    printf("product of the no.s = %f\n", product);

    if (b != 0)
    {    quotient = a/b;
        printf("quotient of the no.s = %f\n", quotient);}
    else 
    {printf("quotient of the no.s = can't divide by 0\n");}
      }