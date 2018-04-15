/*
 ============================================================================
 Name        :  exampleOfForLoop.c
 Author      :  Suleman Dawood
 Version     :  1.0
 Copyright   : 
 Date        :  04/15/2018
 Description :  
 This program prints a number series from 1 to
 user-specified limit in C.
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
//  Local Declarations
    int limit;

//  Statements
    printf("This program prints a number series from 1 to user-specified limit.");
    printf("\nPlease enter the limit: ");
    scanf("%d", &limit);
    for (int i = 1; i <= limit; i++)
        printf("\t%d\n", i);
    return 0;
}// main