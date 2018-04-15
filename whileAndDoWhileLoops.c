/*
 ============================================================================
 Name        :  whileAndDoWhileLoops.c
 Author      :  Suleman Dawood
 Version     :  1.0
 Copyright   : 
 Date        :  04/15/2018
 Description :  
 This program demonstrates while and do...while loops in C.
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
//  Local Declarations
    int loopCount;

//  Statements
    loopCount = 5;
    printf("while loop     : ");
    while (loopCount > 0)
        printf("%3d", loopCount--);
    printf("\n\n");

    loopCount = 5;
    printf("do...while loop: ");
    do
        printf("%3d", loopCount--);
    while (loopCount > 0);
    printf("\n");
    return 0;
}// main