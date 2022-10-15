// Write a program to receive Cartesian co-ordinates (x, y) of a point and convert them into polar-coordinates (r, phi)
//  r = sqrt(x^2 + y^2) and phi = invtan(y/x)
// NOTE :   do a dry run using a pen and paper to understand the code
#include<stdio.h>
#include<math.h>

int main()
{
    // input
    double x, y;
    scanf("%lf %lf", &x, &y);

    // algorithm
    double r = sqrt( pow(x, 2) + pow (y, 2) );
    double phi = atan(y/x);

    // output
    printf("Polar Co-ordinates r = %lf, phi = %lf : ", r, phi );
}

