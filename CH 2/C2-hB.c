// If a five digit number is input through a keyboard, write a program to reverse the number
// NOTE :   do a dry run using a pen and paper to understand the code
// Tricky question alert
// This question can be solved using a simpler logic of arrays but its not taught till this section in the book, so I used thr tricky method.
#include<stdio.h>
#include<math.h>

int main()
{
    // input
    int num, num_reverse = 0;
    scanf("%d", &num);

    // algorithm
    for(int i=0; i<5; i++)
    {
        // getting the last digit of the num
        int last_digit = num%10;
        num = num/10;

        // adding it to num_reverse
        num_reverse = num_reverse + (pow(10.0, (4-i))*last_digit);
    }

    // output
    printf("Reversed Number : %d", num_reverse);
}

