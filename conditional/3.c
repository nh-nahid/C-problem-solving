
// write a C program to check whether a number is negative, positive,
// or zero.

#include <stdio.h>

int main(){
    int num;
    printf("Enter a number: \n");
    scanf("%d", &num);

    if(num > 0){
        printf("%d is a Positive Number", num);
    } else if(num < 0){
         printf("%d is a Negative Number", num);
    } else{
         printf("%d is called Zero", num);
    }

    return 0;
}