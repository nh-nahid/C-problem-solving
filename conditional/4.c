
// write a C program to find maximum between three numbers.

#include <stdio.h>

int main(){
    int num1, num2, num3, maximum;
    printf("Enter a number: \n");
    scanf("%d %d %d", &num1, &num2, &num3);

    if(num1 > num2){
        if(num1 > num3){
            maximum = num1;
        }else{
            maximum = num3;
        }
    } else{
        if(num2 > num3){
            maximum = num2;
        } else{
            maximum = num3;
        }
    }
    printf("Maximum number is %d", maximum);
    return 0;
}