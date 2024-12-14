// Write a C program to convert a binary number into decimal

#include <stdio.h>
int main(){
    int num,binaryNum,decimalNum = 0, base = 1, rem;
    printf("Enter the binary num: ");
    scanf("%d",&num);

    binaryNum = num;

    while(num > 0){
        rem = num % 10;
        decimalNum = decimalNum + rem * base;
        num = num / 10;
        base = base * 2;
    }
    printf("The decimal value of %d is %d",binaryNum, decimalNum);
    return 0;
}