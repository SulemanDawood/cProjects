/*
 ============================================================================
 Name        :  comparativeOperators.c
 Author      :  Suleman Dawood
 Version     :  1.0
 Copyright   : 
 Date        :  04/13/2018
 Description :  This program demonstrates the results of
                relational operators in C.              
 ============================================================================
 */

#include <stdio.h>

int main (void)
{
//  Local Declarations
    int a = 5;
    int b = -3;

//  Statements
    printf(" %2d <  %2d is %2d\n", a, b, a < b);
    printf(" %2d ==  %2d is %2d\n", a, b, a == b);
    printf(" %2d !=  %2d is %2d\n", a, b, a != b);
    printf(" %2d >  %2d is %2d\n", a, b, a > b);
    printf(" %2d <=  %2d is %2d\n", a, b, a <= b);
    printf(" %2d >=  %2d is %2d\n", a, b, a >= b);
    return 0;
}// main