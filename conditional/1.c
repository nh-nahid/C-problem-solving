
// write a C program to check whether a number is even or odd.

#include <stdio.h>

int main(){
   int num;
   printf("Enter a number: \n");
   scanf("%d", &num);

   if (num % 2 == 0)
   {
    printf("%d is a Even Number\n", num);
   } else{
    printf("%d is a Odd Number\n", num);
   }
   
     return 0;
}