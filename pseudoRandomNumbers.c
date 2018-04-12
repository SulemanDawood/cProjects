/*
 ============================================================================
 Name        :  pseudoRandomNumbers.c
 Author      :  Suleman Dawood
 Version     :  1.0
 Copyright   : 
 Date        : 04/12/2018
 Description : This program demonstrates the use of the srand function to 
                generate a pseudorandom number series in C.              
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
//  Statements
    srand(997);

    printf("%d\n", rand());
    printf("%d\n", rand());
    printf("%d\n", rand());

    return 0;
}// main