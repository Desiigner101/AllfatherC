#include <stdio.h>

int main(){

    const double PI = 3.1416;              //declarations double and int's 
    int radius; 
    double circumference;
    double Area;

    printf("enter the radius of a circle: ");   // inputting the radius of a circle leads to the calculation -
    scanf("%d", & radius);                        // for the Cirumference and Area

    circumference = 2 * PI * radius;        //Formula for obtaining the Area of a circle (2πr)
    Area = PI * radius * radius;

    printf("\nCircumference = %.3f\n", circumference);          //RESULT:
    printf("Area = %.3f\n", Area);

    return 0;
}