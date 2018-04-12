/*
 ============================================================================
 Name        :  squaresArray.c
 Author      :  Suleman Dawood
 Version     :  1.0
 Copyright   : 
 Description : This program initializes an array with square of index
                and prints it in C.
 ============================================================================
 */

#include <stdio.h>
#define ARY_SIZE 5

int main(void)
{
//  Local Declarations
    int sqrAry[ARY_SIZE];

//  Statements
    for(int i = 0; i < ARY_SIZE; i++)
        sqrAry[i] = i * i;

    printf("Element\tSquare\n");
    printf("=======\t======\n");
    for(int i = 0; i < ARY_SIZE; i++)
        printf("%5d\t%4d\n", i , sqrAry[i]);
    return 0;
}// main