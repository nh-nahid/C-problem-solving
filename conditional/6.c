
// write a C program to check whether a character is an alphabet or
// not.

#include <stdio.h>

int main(){
    char letter;
    printf("Enter a Letter: \n");
    scanf("%c", &letter);

    if(letter >= 'A' && letter <= 'Z' || letter >= 'a' && letter <= 'z'){
        printf("%C is an alphabet", letter);
    } else{
        printf("%C is not an alphabet", letter);
    }

    return 0;
}