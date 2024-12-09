// Write a C program to find all factors of a number.

#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: \n");
    scanf("%d", &num);

    int i;
    printf("All factors of %d", num);
    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}