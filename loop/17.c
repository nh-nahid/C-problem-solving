// Write a C program to check whether a number is Prime number or
// not

#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: \n");
    scanf("%d", &num);

    if (num % 2 != 0 || num == 2)
    {
        printf("%d is a prime number", num);
    }
    else
    {
        printf("%d is not a prime number", num);
    }
    return 0;
}