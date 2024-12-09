// Left half pyramid
#include <stdio.h>
int main()
{
    int i, j, m, rows;
    printf("Enter the number of rows: \n");
    scanf("%d", &rows);

    for (i = 0; i <= rows; i++)
    {
        for (j = 0; j <= 2 * (rows - i) - 1; j++)
        {
            printf(" ");
        }
        for (m = 0; m <= i; m++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}