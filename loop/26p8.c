// hollow rhombus
#include <stdio.h>
int main(){
    int n,i,j;

    printf("Enter the rows number: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
       for(j=0;j<i;j++){
        printf(" ");
       }
        for(j=0;j<n;j++){
            if(j==0||i==0||i==n-1||j==n-1){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}