// write a C program to input the basic salary of an employee
// and calculate its Gross salary according to the following:

#include <stdio.h>

int main(){
   
   float basicSalary, grossSalary, hra, da;
   printf("Enter basic salary: \n");
   scanf("%f", &basicSalary);

    if(basicSalary <= 10000){
        hra = basicSalary * 0.2;
        da = basicSalary * 0.8;
    } else if (basicSalary <= 20000)
    {
       hra = basicSalary * 0.25;
       da = basicSalary * 0.9;
    } else{
        hra = basicSalary * 0.3;
        da = basicSalary * 0.95;
    }
    
    grossSalary = basicSalary + hra + da;

    printf("Gross salary is %.2f", grossSalary);

    return 0;
}