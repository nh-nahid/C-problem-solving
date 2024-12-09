// Write a C program to check whether a number is palindrome or
// not.

#include <stdio.h>
int main()
{
    int num, remainder, main_number;
    printf("Enter a number: \n");
    scanf("%d", &num);

    main_number = num;
    int reversed_num = 0;

    while (num != 0)
    {
        remainder = num % 10;
        reversed_num = reversed_num * 10 + remainder;

        num /= 10;
    }

    if (main_number == reversed_num)
    {
        printf("%d is a palindrome number\n", main_number);
    }
    else
    {
        printf("%d is not a palindrome number\n", main_number);
    }

    return 0;
}