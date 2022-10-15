// If a five digit number is input through the keyboard, write a program to calculate the sum of its digits
// NOTE :   do a dry run using a pen and paper to understand the code
#include<stdio.h>

int main()
{
    // input
    int num, sum = 0;
    scanf("%d", &num);

    // algorithm
    for(int i=0; i<5; i++)
    {
        sum = sum + num%10;
        num = num/10;
    }

    // output
    printf("Sum : %d", sum);
}

