// write a program to check whether the number is a perfect
// square number or not.

#include <stdio.h>
#include <math.h>

int main(){
    int number;
    printf("Enter a number: \n");
    scanf("%d", &number);

    if(number < 0){
        printf("Negative number cant be a perfect square \n");
    } else{
        int squareRootNum = (int)sqrt(number);

        if(squareRootNum * squareRootNum == number){
            printf("%d is a perfect square number \n", number);
        } else{
             printf("%d is not a perfect square number \n", number);
        }
    }
    return 0;
}