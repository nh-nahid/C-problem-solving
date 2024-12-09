// Write a C program to enter a number and print its reverse.

#include <stdio.h>
int main()
{
    int num, remainder;
    printf("Enter a number: \n");
    scanf("%d", &num);

    int reverse_num = 0;

    while (num != 0)
    {
        remainder = num % 10;
        reverse_num = reverse_num * 10 + remainder;
        num /= 10;
    }
    printf("The number in reversed: %d\n", reverse_num);
    return 0;
}