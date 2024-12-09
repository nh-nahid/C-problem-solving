// write a program that solves a quadratic equation of the form
// ax² + bx + c = 0 where the user provides values for a, b, and c. If
// it's impossible to calculate the roots because of a division by zero
// or a square root of a negative number, print "No real root";
// otherwise, print the answers.

#include<stdio.h>
#include<math.h>

int main()
{
    double a,b,c, x1, x2;
    printf("Enter these values (a,b,c): \n");
    scanf("%lf %lf %lf", &a, &b, &c);
    
    if( a == 0 || ( b*b - 4 * a*c) < 0) {
    	printf("Not a real root");
        } else{
        x1 = (( (-b) + sqrt( b*b - 4*a*c)) / 2*a);
        x2 = (( (-b) - sqrt( b*b - 4*a*c)) / 2*a);
        printf("x1 is = %0.2lf \n x2 is = %0.2lf \n", x1, x2);
        }
        
    return 0;
}