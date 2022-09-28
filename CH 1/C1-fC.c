//  Q) :    If the marks obtained by a student in five different subjects are input through the keyboard, write
//          a program to find out the aggregate marks and percentage marks obtained by the student. Max marks obtainable is 100.
#include <stdio.h>

int main()
{
    // input
    float m1, m2, m3, m4, m5; // marks can have decimal point values.
    scanf("%f", &m1);   scanf("%f", &m2);   scanf("%f", &m3);   scanf("%f", &m4);   scanf("%f", &m5);
    
    // algorithm
    float aggr_marks = m1 + m2 + m3 + m4 + m5;
    float pntg_marks = aggr_marks/5;

    // output
    printf("Aggregate Marks : %f \n", aggr_marks);
    printf("Percentage Marks : %f \n", pntg_marks);
}