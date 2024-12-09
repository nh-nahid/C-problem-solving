// write a program that takes three angles (in degrees) as input
// and determines whether they can form a valid triangle. If they can,
// classify the triangle as equilateral, isosceles, or scalene.

#include <stdio.h>

int main(){
    float angle1, angle2, angle3;
    printf("Enter these angles: \n");
    scanf("%f %f %f", &angle1, &angle2, &angle3);

    if(angle1 + angle2 + angle3 == 180){
         printf("The triangle is valid \n");

        if(angle1 == angle2 && angle2 == angle3){
            printf("The triangle is equilateral \n");
        } else if (angle1 == angle2 || angle1 == angle3 || angle2 == angle3){
             printf("The triangle is isosceles \n");
        } else{
             printf("The triangle is scalene \n");
        }
        
    } else{
        printf("The triangle is not valid \n");
    }
    return 0;
}