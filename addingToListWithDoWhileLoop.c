/*
 ============================================================================
 Name        :  addingToListWithDoWhileLoop.c
 Author      :  Suleman Dawood
 Version     :  1.0
 Copyright   : 
 Date        :  04/15/2018
 Description :  
 This program adds a list of integers from the standard input
 using do...while loop in C.
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
//  Local Declarations
    int x;
    int sum = 0;
    int testEOF;

//  Statements
    printf("Enter your numbers: <EOF> to stop.\n");
    do
        {
        testEOF = scanf("%d", &x);
        if (testEOF != EOF)
            sum += x;
        }// do
        while (testEOF != EOF);
    printf("\nTotal: %d\n", sum);
    return 0;
}// main