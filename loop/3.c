// Write a C program to print all odd numbers between 1 to 100. –
// using while loop

#include <stdio.h>

int main()
{
    int num = 1;

    while (num <= 100)
    {
        if (num % 2 != 0)
        {
            printf("%d\n", num);
        }
        num++;
    }
    return 0;
}