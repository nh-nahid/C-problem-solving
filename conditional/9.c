
// write a C program to check whether a character is uppercase or
// lowercase alphabet.

#include <stdio.h>

int main(){
    char letter;
    printf("Enter a character: \n");
    scanf("%c", &letter);

    if(letter >= 'A' && letter <= 'Z'){
        printf("%c is in Uppercase", letter);
    } else{
         printf("%c is in Lowercase", letter);
    }

    return 0;
}