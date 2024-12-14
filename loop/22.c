// 22.Write a C program to perform 1's compliment on a binary number.

#include <stdio.h>
#define SIZE 8

int main(){
    char binary[SIZE + 1], onesComp[SIZE + 1];
    int i, error = 0;

    printf("Enter %d bit binary number: ",SIZE);
    gets(binary);

    for(i=0;i<SIZE;i++){
        if(binary[i] == '1'){
            onesComp[i] = '0';
        }else if (binary[i] == '0')
        {   
            onesComp[i] = '1';
        }else{
            printf("Invalid Input");
            error = 1;
            break;
        }   
    }
    onesComp[SIZE] = '\0';

    if(error == 0){
        printf("The Origial Binary = %s\n", binary);
        printf("Here is Ones Complement = %s", onesComp);
    }
    return 0;
}
