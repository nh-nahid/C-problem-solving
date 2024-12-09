// Write a C program to print multiplication table of any number

#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter a number: \n");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++)
    {
        int ans = n * i;
        printf("%d x %d = %d \n", n, i, ans);
    }
    return 0;
}