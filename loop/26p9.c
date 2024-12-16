// hollow inverted pyramid
#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter the rows number: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (j = 0; j <(2* (n - i) - 1); j++)
        {
            if (i==0||j == 0 || j == (2 * (n - i) - 2))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}