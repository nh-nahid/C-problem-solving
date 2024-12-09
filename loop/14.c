// Write a C program to calculate factorial of a number.

#include <stdio.h>
int main()
{
    int num, f = 1, i;
    printf("Enter a number to find factorial: \n");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        f = f * i;
    }
    printf("Factorial of %d is %d", num, f);
    return 0;
}