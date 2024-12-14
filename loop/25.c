// Write a C program to print Pascal triangle up to n rows.

#include <stdio.h>
int main(){
    int n,i,j;
    printf("Enter the rows number: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        int number = 1;
            for(j=0; j<=i;j++){
                printf("%d",number);
                number = (number * (i-j))/(j+1);
            }
            printf("\n");
    }
    return 0;
}