// Full pyramid
#include <stdio.h>
int main()
{
    int i, j, m, rows;
    printf("Enter the rows number: \n");
    scanf("%d", &rows);

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < 2 * (rows - i) - 1; j++)
        {
            printf(" ");
        }
        for (m = 0; m < 2 * i + 1; m++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}