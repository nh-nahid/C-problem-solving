#include <stdio.h>
int main(){
    int n,i,j;
    printf("Please enter a odd number: ");
    scanf("%d",&n);

    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
           if (i==j||i+j==n-1)
           {
            printf("%d",i+1);
           }else{
            printf(" ");
           }
           
        }
        printf("\n");
    }
    return 0;
    
}