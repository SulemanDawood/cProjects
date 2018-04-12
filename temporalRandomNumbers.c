/*
 ============================================================================
 Name        :  temporalRandomNumbers.c
 Author      :  Suleman Dawood
 Version     :  1.0
 Copyright   : 
 Description : This program demonstrates the use of the function to generate
                a temporal random number series in C.              
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
//  Statements
    srand(time(NULL));  // Seed temporarily
    
    printf("%d\n", rand());
    printf("%d\n", rand());
    printf("%d\n", rand());

    return 0;
}// main