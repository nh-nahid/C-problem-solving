// write a C program to print all possible permutations of 1 2 3 using loop
#include <stdio.h>
int main(){
    int i,j,k;

    for ( i = 1; i <= 3; i++)
    {
       for ( j = 1; j <= 3; j++)
       {
            if (j!=i)
            {
               for ( k = 1; k <= 3; k++)
               {
               if (k!=i && k!=j)
               {
                printf("%d %d %d\n",i,j,k);
               }
               
               }
               
            }
            
       }
       
    }
    return 0;
    
}