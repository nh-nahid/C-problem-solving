// write a C program to input electricity unit charges and
// calculate the total electricity bill according to the given condition:

#include <stdio.h>

int main(){
    float unit, bill,adCharge,totalBill;
    printf("Enter unit: \n");
    scanf("%f", &unit);

    if(unit <= 50)
    {
        bill = unit * 0.50;
    } else if (unit <= 150)
    {
        bill = unit * 0.75;
    } else if (unit <= 250)
    {
        bill = unit * 1.20;
    } else{
        bill = unit * 1.50;
    }
    
    adCharge = bill * 0.2;
    totalBill = bill + adCharge;

    printf("Total bill is %.2f Rs.", totalBill);

    return 0;
}