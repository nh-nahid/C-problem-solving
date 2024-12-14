// Write a C program to print Fibonacci series up to n terms.
#include <stdio.h>
int main()
{
    int n, i, a, b, c;
    printf("Enter a ending number: \n");
    scanf("%d", &n);

    a = 0;
    b = 1;
    c = 0;

    for (i = 1; i <= n; i++)
    {
        printf("%d, ", c);

        a = b;
        b = c;
        c = a + b;
    }
    return 0;
}