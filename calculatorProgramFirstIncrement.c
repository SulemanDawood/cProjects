/*
 ============================================================================
 Name        :  calculatorProgramFirstIncrement.c
 Author      :  Suleman Dawood
 Version     :  1.0
 Copyright   : 
 Date        : 04/12/2018
 Description : This program adds two integers read from the
                keyboard and prints the result in C.              
 ============================================================================
 */

#include <stdio.h>

//  Function Declarations
void getData    (int* a, int* b);

int main(void)
{
//  Local Declarations
    int a;
    int b;

//  Statements
    getData (&a, &b);

    printf("**main:     a= %d; b= %d\n", a, b);

    return 0;
}//  main

/* ================= getData ======================
    Reads two integers from the keyboard.
    Pre     Parameters a and b are addresses.
    Post    Data read into parameter addresses.
*/

void getData    (int* a, int* b)
{
    printf("Please enter two integer numbers: ");
    scanf("%d %d", a, b);

    printf("**getData: a = %d; b = %d\n", *a, *b);
    return;
}// getData