/*
 ============================================================================
 Name        :  addingAListOfNumbers.c
 Author      :  Suleman Dawood
 Version     :  1.0
 Copyright   : 
 Date        :  04/15/2018
 Description :  
 This program adds a list of integers from the standard input unit in C.
 ============================================================================
 */

#include <stdio.h>

int main (void)
{
//  Local Declarations
    int x;
    int sum = 0;

//  Statements
    printf("Enter your numbers: <EOF> to stop.\n");
    while (scanf("%d", &x) != EOF)
        sum += x;
    printf("\nThe total is: %d\n", sum);
    return 0;
}// main