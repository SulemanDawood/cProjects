/*
 ============================================================================
 Name        :  avgElementsInVarLengthArray.c
 Author      :  Suleman Dawood
 Version     :  1.0
 Copyright   : 
 Description : This program calculates average of elements in
                variable-length array in C.
 ============================================================================
 */
#include <stdio.h>

//  Function Declaration
double average (int size, int ary[*]);

int main(void)
{
//  Local Declarations
    int size;
    double ave;

//  Statements
    printf("How many numbers do you want to average? ");
    scanf("%d", &size);

    // Create and fill variable-length array
    {
    
    int ary[size];

    // Fill array
    for ( int i = 0; i < size; i++)
        {
            printf("Enter number %2d: ", i+1);
            scanf ("%d", &ary[i]);
        }// for
    ave = average(size, ary);
    }// Fill array block

    printf("Average is: %1f", ave);
    return 0;
}// main


/* ====================== average =========================
    Calculate the return average of values in an array
    Pre     Array contains values
    Post    Average calculated and returned
*/

double average (int size, int ary[size])
{
//  Local Declarations
    int sum = 0;
    double ave;
    
//  Statements
    for (int i = 0; i < size; i++)
        sum += ary[i];

    ave = (double)sume / size;
    return ave;
}// average