// Write a C program to calculate sum of digits of a number.

#include <stdio.h>
int main()
{
    int num, remainder;
    printf("Enter the number: \n");
    scanf("%d", &num);

    int sum = 0;

    while (num != 0)
    {
        remainder = num % 10;
        sum = sum + remainder;
        num /= 10;
    }
    printf("The sum of digits = %d\n", sum);

    return 0;
}