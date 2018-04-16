/*
 ============================================================================
 Name        :  compDoAndDoWhile.c
 Author      :  Suleman Dawood
 Version     :  1.0
 Copyright   : 
 Date        :  04/15/2018
 Description :  
 This program demonstrates while do...while loop in C.
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
//  Local Declarations
   int loopCount;
   int testCount;

//  Statements
    loopCount = 1;
    testCount = 0;
        printf("while loop:         ");
    while (testCount++, loopCount <= 10)
        printf("%3d", loopCount++);
        printf("Loop Count:         %3d\n", loopCount);
        printf("Number of tests:    %3d\n", testCount);

        loopCount = 1;
        testCount = 0;
        printf("\ndo...while loop:  ");
    do
            printf("%3d", loopCount++);
    while (testCount++, loopCount <= 10);

        printf("\nLoop Count:       %3d\n", loopCount);
        printf("Number of tests:    %3d\n", testCount);
    return 0;
}// main