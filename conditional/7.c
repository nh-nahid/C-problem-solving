
// write a C program to input any alphabet and check whether it is
// vowel or consonant.

#include <stdio.h>

int main(){
    char letter;
    printf("Enter an alphabet: \n");
    scanf("%c", &letter);

    if(letter =='a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' || letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U'){
        printf("%c is a vowel\n", letter);
    } else{
        printf("%c is a consonant\n", letter);
    }

    return 0;
}