// Write a C program to print all Armstrong numbers between 1 to n

#include <stdio.h>
int main(){
    int num,rem,sum,i,n,temp;

    printf("Enter a number 1 to n: ");
    scanf("%d", &n);

    for(i=1;i<=n;i++){
        sum = 0;
        num = i;
        temp = num;
        
        while(num>0){
            rem = num % 10;
            sum = sum + (rem*rem*rem);
            num = num/10;

        }
        if (temp <= 9 && temp != 1)
        {
            printf("%d\n", i);
        }
        if(sum == temp){
            printf("%d\n", i);
        }
    }
    
    return 0;
}