// If lengths of three sides of a triangle are input through the keyboard, write a program to find the area of the triangle
// NOTE :   do a dry run using a pen and paper to understand the code
#include<stdio.h>
#include<math.h>

int main()
{
    // input
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    // algorithm
    double semi_perimeter = (a+b+c)/2;
    double area = sqrt( abs( semi_perimeter * (semi_perimeter - a) * (semi_perimeter - b) * (semi_perimeter - c)));   // Heron's Formula
    // Abs () returns the absolute value of a number. Is used to prevent getting negative values in square root function 

    // output
    printf("Area of triangle (%lf, %lf, %lf) is : %lf", a, b, c, area);
}

// Note : The answer is either wrong or 0 for sides of triangle that are not possible. 
//          You can further improve the code by adding the condition.
//          not added here coz if statement not taught till this point
