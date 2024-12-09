// write a program that takes three integers as input,
// representing the sides of a triangle, and determines if it's a right
// triangle. If so, determine whether the triangle is equilateral,
// isosceles, or scalene.

#include <stdio.h>

int main()
{
    int side1, side2, side3;
    printf("Enter these side: \n");
    scanf("%d %d %d", &side1, &side2, &side3);

    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1)
    {
        printf("It is a valid Triangle \n");

        if (side1 == side2 && side2 == side3)
        {
            printf(" It is equilateral triangle \n");
        }
        else if (side1 == side2 || side1 == side3 || side2 == side3)
        {
            printf("It is isosceles triangle \n");
        }
        else
        {
            printf(" It is scalene triangle \n");
        }
    }
    else
    {
        printf("It is not a valid Triangle \n");
    }

    return 0;
}