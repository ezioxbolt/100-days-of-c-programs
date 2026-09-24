#include <stdio.h>

int main()
{
    float length, breadth;
    float area, perimeter;

    printf("Enter length and breadth: ");
    scanf("%f %f", &length, &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("Area = %f\n", area);
    printf("Perimeter = %f", perimeter);

    return 0;
}