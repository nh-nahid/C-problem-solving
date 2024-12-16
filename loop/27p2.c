// write a C program to print all possible permutations of 1 2 3 4 using loop.
#include <stdio.h>
int main()
{
    int i, j, k, l;

    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 4; j++)
        {
            if (j != i)
            {
                for (k = 1; k <= 4; k++)
                {
                    if (k != i && k != j)
                    {
                        for (l = 1; l <= 4; l++)
                        {
                            if (l != i && l != j && l != k)
                            {
                                printf("%d %d %d %d \n", i, j, k, l);
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}