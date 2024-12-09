// Inverted left half pyramid

#include <stdio.h>
int main()
{
    int i, j, m, rows;
    printf("Enter the rows number: \n");
    scanf("%d", &rows);

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < 2 * i; j++)
        {
            printf(" ");
        }
        for (m = 0; m < rows - i; m++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}