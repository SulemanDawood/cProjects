/*
 ============================================================================
 Name        :  whileLoopToPrintNumbers.c
 Author      :  Suleman Dawood
 Version     :  1.0
 Copyright   : 
 Date        :  04/15/2018
 Description :  
 This program uses a simple while loop that
 print 10 numbers per line in C.
 ============================================================================
 */

#include <stdio.h>

int main (void)
{
//  Local Declarations
    int num;
    int lineCount;

//  Statements
    printf("Enter an integer between 1 and 100: ");
    scanf ("%d", &num);

    //  Test number
    if (num > 100)
        num = 100;

    lineCount = 0;
    while (num > 0)
        {
        if (lineCount < 10)
            lineCount++;
            else
                {
                    printf("\n");
                    lineCount = 1;
                }// else
            printf("%4d", num--); // num -- updates loop
        }// while
    printf("\n");
    return 0;
}// main