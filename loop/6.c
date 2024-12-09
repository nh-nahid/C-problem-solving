// Write a C program to count number of digits in a number.

#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: \n");
    scanf("%d", &num);

    int i = 0;

    while (num != 0)
    {
        num = num / 10;
        i++;
    }

    printf("The number of the digits is %d", i);
    return 0;
}