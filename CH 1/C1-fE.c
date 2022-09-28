//  Q) :    The length and breadth of a rectange and radius of a circle are input through a keyboard. Write a program
//          to calculate the area and perimeter of the rectange, and the area and circumference of the circle.

#include <stdio.h>

int main()
{
    // input
    float len, brd, radius;
    scanf("%f", &len);   scanf("%f", &brd);   scanf("%f", &radius);

    // algorithm
    float area_circ = 3.14*radius*radius;
    float perim_rect = 2*(len + brd);
    float area_rect = len*brd;

    // output
    printf("Area of the rectangele : %f units \n", area_rect);
    printf("Perimeter of the rectange : %f units \n", perim_rect);
    printf("Area of Circle : %f units \n", area_circ);
}