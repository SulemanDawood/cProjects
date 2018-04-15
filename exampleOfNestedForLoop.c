/*
 ============================================================================
 Name        :  exampleOfNestedForLoop.c
 Author      :  Suleman Dawood
 Version     :  1.0
 Copyright   : 
 Date        :  04/15/2018
 Description :  
 This program prints a number series from 1 on a line using
 a nested for loop in C.
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
//  Statements
    for (int i = 1; 1 <= 3; i++)
        {
        printf("Row %d: ", i);
        for (int j = 1; j <= 5; j++)
            printf("%3d", j);
            printf("\n");
        }// for i
    return 0;
}// main