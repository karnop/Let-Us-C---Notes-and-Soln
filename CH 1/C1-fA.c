// Q) : Ramesh's basic salary is input through keyboard. His dearness allowance 
//      is 40% of basic salary, and house rent allowance is 20% of basic salary. 
//      Write a program to calculate his gross salary.
#include <stdio.h>

int main()
{
    // input
    float salary; 
    printf("Enter salary : ");
    scanf("%f", &salary);

    // algorithm
    float dearness = (0.40)*salary;
    float h_rent = (0.20)*salary;
    float gross_sal = salary - (dearness+h_rent);

    // output
    printf("Gross Salary : %f \n", gross_sal);
}