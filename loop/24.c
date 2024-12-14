// Write a C program to convert a decimal number into binary
#include <stdio.h>
int main(){
    int num,rem;
    printf("Enter the decimal value: ");
    scanf("%d", &num);

    if(num == 0){
        printf("0");
        return 0;
    }
    while(num>0){
        rem = num % 2;
        printf("%d",rem);
        num = num /2;
    }

    return 0;
}