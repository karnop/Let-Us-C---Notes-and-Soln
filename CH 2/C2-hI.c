// Consider a currency system in which there are notes of seven denominations, namely, Re 1, Rs 2, 
// Rs 5, Rs 10, Rs 50, Rs 100. If sum of Rs N is entered through the keyboard, Write a program to compute 
//  smallest number of notes that will combine to give N.
// NOTE :   do a dry run using a pen and paper to understand the code
#include<stdio.h>

int main()
{
    // input
    int n;  
    scanf("%d", &n);
    int r1, r2, r5, r10, r50, r100;

    // algorithm
    r100 = n/100;   
    n = n - (100*r100);
    r50 = n/50;   
    n = n - (50*r50);
    r10 = n/10;   
    n = n - (10*r10);
    r5 = n/5;   
    n = n - (5*r5);
    r2 = n/2;   
    n = n - (2*r2);
    r1 = n/1;
    n = n - (1*r1);

    // Note : We used the notes of greater denomination first because we wanted least notes
    //         This approach is called greedy approach   

    // output
    printf("Rs 1 Notes required : %d \n", r1);
    printf("Rs 2 Notes required : %d \n", r2);
    printf("Rs 5 Notes required : %d \n", r5);
    printf("Rs 10 Notes required : %d \n", r10);
    printf("Rs 50 Notes required : %d \n", r50);
    printf("Rs 100 Notes required : %d \n", r100);
}
