
// write a C program to input month number and print number
// of days in that month.

#include <stdio.h>

int main(){
    int num;
    printf("Enter the month number: \n");
    scanf("%d", &num);

    if(num == 1 || num == 3 || num == 5 || num == 7 || num == 9 || num == 11){
        printf("There is 31 days in %d no. month\n", num);
    } else if (num == 2){
         printf("There is 28 days in %d no. month\n", num);
    } else
    {
         printf("There is 30 days in %d no. month\n", num);
    }
    return 0;
}