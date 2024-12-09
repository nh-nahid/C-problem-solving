// write a C program to input marks of five subjects (Physics,
// Chemistry, Biology, Mathematics, and Computer). Calculate
// percentage and grade according to the following:

#include <stdio.h>

int main(){
    int marks;
    printf("Enter your marks: \n");
    scanf("%d", &marks);

    if(marks >= 90 && marks <= 100){
        printf("Grade A");
    } else if (marks >= 80 && marks <= 89)
    {
                printf("Grade B");
    }else if (marks >= 70 && marks <=79)
    {
                printf("Grade C");
    }else if (marks >= 60 && marks <=69)
    {
                printf("Grade D");
    }else if (marks >= 40 && marks <=59)
    {
                printf("Grade E");
    } else if(marks >= 0 && marks <=39)
    {
                printf("Grade F");
    }
    
    return 0;

}
