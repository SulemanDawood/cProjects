/*
 ============================================================================
 Name        :  calculatorProgramThirdIncrement.c
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
void getData    (int *a, int *b);
int add         (int a, int b);
void printRes   (int a, int b, int sum);

int main(void)
{
//  Local Declarations
    int a;
    int b;
    int sum = 0;

//  Statements
    getData (&a, &b);

    sum = add (a,b);

    printRes (a, b, sum);
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
    Adds two integers and returns the sum.
    Pre     Parameters a and b.
    Post    Returns a + b.
*/

int add (int a, int b)
{
//  Local Definitions
    int sum;

//  Statements
    sum = a + b;
    return sum;
}// add

/* ================= printRes ======================
    Prints the calculated results.
    Pre     a and b contain input; sum the results.
    Post    Data printed.
*/
void printRes   (int a, int b, int sum)
{
    printf("%4d + %4d = %4d\n", a,  b, sum);
    return;
}// printRes