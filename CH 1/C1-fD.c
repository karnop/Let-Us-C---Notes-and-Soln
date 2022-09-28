//  Q) :    Temperature of a city in Fahrenheit degrees is input through the keyboard. Write a program to convert
//          this temperature to centigrade degrees.

#include <stdio.h>

int main()
{
    // input
    float temp_frt;
    scanf("%f", &temp_frt);

    // algorithm
    float temp_clcs = ((temp_frt - 32) * 5)/9;

    // output
    printf("Temp in Fahrenheit : %f \n", temp_frt);
    printf("Temp in Celcius : %f \n", temp_clcs);
}