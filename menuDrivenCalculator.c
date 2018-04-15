/*
 ============================================================================
 Name        :  menuDrivenCalculator.c
 Author      :  Suleman Dawood
 Version     :  1.0
 Copyright   : 
 Date        :  04/15/2018
 Description :  
 This program uses a menu to allow the user to add, 
 subtract, multiply, and divide two integers in C.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//  Function Delcarations
int getOption (void);
void getData (int *num1, int *num2);
float calc   (int option, int num1, int num2);
float add    (int num1, int num2);
float sub    (int num1, int num2);
float mult   (int num1, int num2);
float divi   (int num1, int num2);

int main (void)
{
//  Local Declarations
    int option;
    int num1;
    int num2;
    float result;

//  Statements
    option = getOption();
    getData (&num1, &num2);
    result = calc (option, num1, num2);

    printf("** In main result is: %6.2f\n", result);

    printf("Your answer is: %6.2f\n", result);

    return 0;
}//  main

/* ====================== getOption =========================
    Shows a menu and reads the user option.
    Pre     Nothing
    Post    returns the option
*/
int getOption ()
{
//  Local Declarations
    int option;

//  Statements
    printf("\t*************************************");
    printf("\n\t*             MENU                *");
    printf("\n\t*                                 *");
    printf("\n\t*    1. ADD                       *");
    printf("\n\t*    2. SUBTRACT                  *");
    printf("\n\t*    3. MULTIPLY                  *");
    printf("\n\t*    4. DIVIDE                    *");
    printf("\n\t*                                 *");
    printf("\n\t***********************************");

    printf("\n\n Please type your choice ");
    printf("and key return: ");
    scanf("%d", &option);
    return option;
}// getOption

/* ====================== getData =========================
    Reads two integers from the keyboard.
    Pre     Parameters a and b are addresses
    Post    Data read into parameter functions
*/
void getData (int *a, int *b)
{
    printf("Please enter two integer numbers: ");
    scanf("%d %d", a, b);
    return;
}// getData

/* ====================== calc =========================
    Determines the type of operation and calls 
    a function to perform it.
    Pre     option contains the operations
            num1 & num2 contains data
    Post    returns the results
*/
float calc (int option, int num1, int num2)
{
//  Local Declarations
    float result;

//  Statements
    printf("**In calc input is: %d %d %d\n", option, num1, num2);
        switch(option)
        {
            case 1: result = add (num1, num2); // ADD
                    break;
            case 2: result = sub (num1, num2); // SUBTRACT
                    break;
            case 3: result = mult (num1, num2); // MULTIPLY
                    break;
            case 4: if (num2 == 0.0) // DIVIDE
                    {
                    printf("\n\a\aError: ");
                    printf("division by zero ***\n");
                    exit (100);
                    }// if
                    else
                        result = divi (num1, num2);
                    break;
            default: printf("\aOption not available\n");
                    exit(101);
         }// switch
    printf("**In calc result is: %6.2f\n", result);
    return result;
}// calc

/* ====================== add =========================
    Adds two numbers then returns the sum.
    Pre     a and b contain values to be added
    Post    returns a + b
*/
float add (int a, int b)
{
//  Local Declarations
    float sum;

//  Statements
    sum = a + b;
    printf("**In add result is: %6.2f\n", sum);
    return sum;
}// add

/* ====================== sub =========================
    Subtracts two numbers.
    Pre     a and b contain values to be subtracted
    Post    returns difference
*/
float sub (int a, int b)
{
//  Local Declarations
    float dif;

// Statements
    dif = a - b;
    printf("**In sub result is: %6.2f\n", dif);
    return dif;
}// sub

/* ====================== mult =========================
    Multiplies two numbers.
    Pre     a and b contain values to be multiplied
    Post    returns product of a & b
*/
float mult (int a, int b)
{
//  Local Declarations
    float prod;

//  Statements
    prod = a * b;
    printf("**In mult result is: %6.2f\n", prod);
    return prod;
}// mult

/* ====================== div =========================
    Divides two numbers.
    Pre     a and b contain values to be divided
    Post    returns quotient of a & b
*/
float divi (int a, int b)
{
//  Local Declarations
    float quot;

//  Statements
    quot = a / b;
    printf("**In div result is: %6.2f\n", quot);
    return quot;
}// div

