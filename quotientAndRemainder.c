/*
 ============================================================================
 Name        :  quotientAndRemainder.c
 Author      :  Suleman Dawood
 Version     :  1.0
 Copyright   : 
 Description : This program reads two integers then prints then
                quotients and remainder of the first number divided 
                by the second in C.              
 ============================================================================
 */

#include <stdio.h>

//  Function Decalarations
    void divide     (int dividend, int divisor,
                    int* quotient, int* remainder);
    void getData    (int* dividend, int* divisor);
    void print     (int quotient, int remainder);

int main(void)
{
//  Local Decalarations
int dividend;
int divisor;
int quot;
int rem;

//  Statements
    getData (&dividend, &divisor);
    divide  (dividend,  divisor, &quot, &rem);
    print  (quot, rem);

    return 0;
}// main

/* ================= getData ======================
    Reads two numbers into variables.
    Pre     Nothing.
    Post    Data read and placed in calling function.
*/
void getData    (int* dividend, int* divisor)
{
//  Statements
    printf("Enter two integers and return: ");
    scanf  ("%d%d", dividend, divisor);
    return;
}// getData

/* ================= divide ======================
    Divides two integers and places the
    quotient/remainder in calling program variables.
    Pre     dividend & divisor contain integer values.
    Post    quotient & remainder calc'd.
*/
void divide     (int dividend, int divisor,
                    int* quotient, int* remainder)
{
//  Statements
    *quotient   = dividend / divisor;
    *remainder  = dividend % divisor;
    return;
}// divide

/* ================= print ======================
    Prints the quotients and the remainder.
    Pre     quot contains the quotient.
            rem contains the remainder.
    Post    quotient & remainder printed.
*/
void print     (int quot, int rem)
{
//  Statements
    printf("Quotient: %3d\n", quot);
    printf("Remainder: %3d\n", rem);
    return;
}// print