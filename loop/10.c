// Write a C program to find frequency of each digit in a given
// integer.
#include <stdio.h>
int main(){
    int num, remainder,k, count = 0;
    printf("Enter a number to find: \n");
    scanf("%d", &num);

    while(num != 0){
        remainder = num % 10;
        remainder = num;
        if(remainder == k ){
            count++;
        }
        num /= 10;
        printf("%d", count);
    }

    return 0;
}