//  Q) :    Paper of size A0 has dimensions 1189mm x 841mm. Each subsequent size A(n) is defined as A(n-1) cut in half parallel 
//          to its shorter sides. Write a program to calculate and print paper sizes A0, A1, A2, ... A8.

// A) : if A(n) = a x b
//      then atq, A(n-1) = b x (a/2)

// note : This problem can bw solved using a 2d or a 1d array. 
#include <stdio.h>

int main()
{
    int a0_l = 1189, a0_b = 841;
    
    // algorithm
    int a1_l = a0_b, a1_b = a0_l/2;
    int a2_l = a1_b, a2_b = a1_l/2;
    int a3_l = a2_b, a3_b = a2_l/2;
    int a4_l = a3_b, a4_b = a3_l/2;
    int a5_l = a4_b, a5_b = a4_l/2;
    int a6_l = a5_b, a6_b = a5_l/2;
    int a7_l = a6_b, a7_b = a6_l/2;
    int a8_l = a7_b, a8_b = a7_l/2;

    // output
    printf("A0 : %d mm x %d mm \n", a0_l, a0_b);
    printf("A1 : %d mm x %d mm \n", a1_l, a1_b);
    printf("A2 : %d mm x %d mm \n", a2_l, a2_b);
    printf("A3 : %d mm x %d mm \n", a3_l, a3_b);
    printf("A4 : %d mm x %d mm \n", a4_l, a4_b);
    printf("A5 : %d mm x %d mm \n", a5_l, a5_b);
    printf("A6 : %d mm x %d mm \n", a6_l, a6_b);
    printf("A7 : %d mm x %d mm \n", a7_l, a7_b);
    printf("A8 : %d mm x %d mm \n", a8_l, a8_b);
}
