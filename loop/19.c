// Write a C program to find all prime factors of a number.
#include <stdio.h>
int main()
{
    int num, i, j, isPrime;
    printf("Enter a ending number: \n");
    scanf("%d", &num);

    for (i = 2; i <= num; i++)
    {
        if (num % i == 0)
        {
            isPrime = 1;

            for (j = 2; j <= i / 2; j++)
            {
                if (i % j == 0)
                {
                    isPrime = 0;
                    break;
                }
            }
            if (isPrime == 1)
            {
                printf("%d, ", i);
            }
        }
    }
    return 0;
}