/*
 ============================================================================
 Name        :  nestedIfStatements.c
 Author      :  Suleman Dawood
 Version     :  1.0
 Copyright   : 
 Date        :  04/13/2018
 Description :  This program demonstrates nested if in two-way selection in C.              
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
//  Local Declarations
    int a;
    int b;

//  Statements
    printf("Please enter two integers: ");
    scanf("%d%d", &a, &b);

    if (a <= b)
        if (a < b)
            printf("%d < %d\n", a, b);
        else
            printf("%d == %d\n", a, b);
    else
        printf("%d > %d\n", a, b);
    
    return 0;
}// main