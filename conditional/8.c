
// write a C program to input any character and check whether it is
// alphabet, digit, or special character.

#include <stdio.h>

int main(){
    char value;
    printf("Enter a value to check: \n");
    scanf("%c", &value);

    if(value >= 'A' && value <= 'Z' || value >= 'a' && value <= 'z'){
        printf("%c is an alphabet", value);
    } else if(value >= '0' && value <= '9'){
        printf("%c is a number", value);
    } else{
         printf("%c is a special character", value);
    }

    return 0;
}