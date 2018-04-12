/*
 ============================================================================
 Name        :  randomNumbers10to20.c
 Author      :  Suleman Dawood
 Version     :  1.0
 Copyright   : 
 Date        : 04/12/2018
 Description : This program demonstrates generating a random
                series in the range 10 to 20 in C.              
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
//  Local Declarations
    int range;

//  Statements
    srand(time(NULL));
    range = (20 - 10) + 1;

    printf("%d",        rand() % range + 10);
    printf(" %d",       rand() % range + 10);
    printf(" %d\n",     rand() % range + 10);

    return 0;
}// main