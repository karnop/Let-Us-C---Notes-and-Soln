//  Q) : The distance between two cities in km is input through the keyboard. Write a program
//       to convert and print this distance in meters, feet, inches and centimeters.

#include <stdio.h>

int main()
{
    // input
    float dist_km;
    printf("Enter the distance in km : ");
    scanf("%f", &dist_km);

    // algorithm
    float dist_mtr, dist_ft, dist_in, dist_cm;
    dist_mtr = dist_km*1000;
    dist_ft = dist_km*3280.84;
    dist_cm = dist_km*100000;
    // note : the distance inputed has to be less than 100000(10^5) to prevent integer overflow
    dist_in = dist_km*39370.1;

    printf("Distance in KiloMeters  : %f \n", dist_km);
    printf("Distance in Meters      : %f \n", dist_mtr);
    printf("Distance in CentiMeters : %f \n", dist_cm);
    printf("Distance in Feets       : %f \n", dist_ft);
    printf("Distance in Inches      : %f \n", dist_in);

}