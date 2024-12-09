// write a program that takes an integer number as input, which
// is less than 100, to check whether the number is a Harshad number
// or not. A Harshad number is an integer divisible by the sum of its
// digits.

#include <stdio.h>

int main(){
    int number;
    printf("Enter your number: \n");
    scanf("%d", &number);

int firstDigit = number/10;
int secDigit = number%10;

int sum = firstDigit + secDigit;

    if(number < 100){
        if(number % sum == 0){
        printf("%d is a harshad number \n", number);
    }else{
         printf("%d is not a harshad number \n", number);
    }
    }else{
        printf("Please enter a number less than 100! \n");
    }
    return 0;
}