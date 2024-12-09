// Write a C program to find sum of all even numbers between 1 to n
// using loop.

#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter Terminating number: \n");
    scanf("%d", &n);
    int sum = 0;

    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }
    printf("%d", sum);

    return 0;
}