/*
 ============================================================================
 Name        :  calculatorProgramSecondIncrement.c
 Author      :  Suleman Dawood
 Version     :  1.0
 Copyright   : 
 Date        : 04/12/2018
 Description : This program adds two integers read from the
                keyboard and prints the result in C.              
 ============================================================================
 */

#include <stdio.h>

//  Functions Declarations
void getData    (int* a, int* b);
int add         (int a, int b);

int main(void)
{
//  Local Declarations
    int     a;
    int     b;
    int     sum;

//  Statements
    getData (&a, &b);
    
    sum = add (a , b);
    printf("**main: %d + %d = %d\n", a, b,  sum);
    return 0;
}//  main

/* ================= getData ======================
    Reads two integers from the keyboard.
    Pre     Parameters a and b are addresses.
    Post    Data read into parameter addresses.
*/
void getData (int* a, int *b)
{
    printf("Please enter two integer numbers: ");
    scanf("%d %d", a, b);
    return;
}// getData

/* ================= add ======================
    Reads adds two numbers and returns the sum.
    Pre     a and b contain values to be added.
    Post    Returns a + b.
*/

int add (int a, int b)
{
//  Local Declarations
    int sum;

// Statemtents
    sum = a + b;
    printf("**add:      %d  +   %d  =   %d\n", a, b, sum);

    return sum;
}// add