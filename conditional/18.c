// write a program that takes an integer number as input, which
// is greater than 99 and less than 1000. Print the first digit of the
// number. As an example, if the input number is 253, print 2.

#include <stdio.h>

int main(){
    int number;
    printf("Enter a number between 100 - 1000 : \n");
    scanf("%d", &number);

    if(number > 99 && number <1000){
        int firstDigit = number / 100;
        printf("The first digit of %d is %d \n", number, firstDigit);
    }else{
        printf("Please enter a number between 100-1000 \n");
    }

    return 0;
}