/*
 ============================================================================
 Name        :  randomRealNumbers.c
 Author      :  Suleman Dawood
 Version     :  1.0
 Copyright   : 
 Date        : 04/12/2018
 Description : This program demonstrates generating a real random
                series in the range 0 to 1 in C.              
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
//  Local Declarations
    float x;

//  Statements
    srand(time(NULL));
    x = (float)rand() / RAND_MAX;
    printf("%f", x);
    x = (float)rand() / RAND_MAX;
    printf(" %f", x);
    x = (float)rand() / RAND_MAX;
    printf("  %f\n", x);

    return 0;
}// main

