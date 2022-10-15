// two numbers are input through the keyboard into two locations c and d. Write a program to interchange the contents of c and d
// NOTE :   do a dry run using a pen and paper to understand the code
#include<stdio.h>

int main()
{
    // input
    int c, d;
    scanf("%d %d", &c, &d);
    printf("C : %d, D : %d \n", c, d);

    // algorithm
    int temp = c;
    c = d;
    d = temp;

    // output
    printf("C : %d, D : %d", c, d);
}

