/*
 ============================================================================
 Name        :  calcArrayAvg.c
 Author      :  Suleman Dawood
 Version     :  1.0
 Copyright   : 
 Description : This program calculate the average of the number 
                in an array in C.
 ============================================================================
 */
#include <stdio.h>

//  Function Declaration
double average (int ary[ ]);

int main(void)
{
//  Local Declarations
    double ave;
    int base[5] = {3,   7,  2,  4,  5};

//  Statements
    ave = average(base);
    printf("Average is: %1f\n", ave);
    return 0;
}// main

/* ====================== average =========================
    Calculate the return average of values in an array
    Pre     Array contains values
    Post    Average calculated and returned
*/

double average (int ary[ ])
{
//  Local Declarations
    int sum = 0;
    
//  Statements
    for (int i = 0; i < 5; i++)
        sum += ary[i];

    return (sum/5.0);
}// average