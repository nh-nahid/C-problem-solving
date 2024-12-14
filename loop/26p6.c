// pattern rectangle
#include <stdio.h>
int main(){
    int n,i,j;
    printf("Enter the rows number: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("* ");
        for ( j = 1; j < n; j++)
        {
                   printf("* ");

        }
        printf("\n");

        
    }
    return 0;
}