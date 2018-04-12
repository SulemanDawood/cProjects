/*
 ============================================================================
 Name        :  testingSorts.c
 Author      :  Suleman Dawood
 Version     :  1.0
 Copyright   : 
 Description : This program is a test drier for insertion sort in C.              
 ============================================================================
 */

#include <stdio.h>
#include <stdbool.h>
#include "insertionSort.c"

#define MAX_ARY_SIZE 15

//  Function Declarations
void insertionSort  (int list [], int last);

int main (void)
{
//  Local Declarations
    int ary[MAX_ARY_SIZE] = {89, 72, 3, 15, 21,
                            57, 61, 44, 19, 98,
                            5, 77, 39, 59, 61 };

//  Statements
    printf("Unsorted: ");
    for (int i = 0; i < MAX_ARY_SIZE; i++)
        printf("%3d", ary[i]);

    insertionSort (ary, MAX_ARY_SIZE - 1);
   
    printf("\nSorted: ");
    for (int i = 0; i < MAX_ARY_SIZE; i++)
        printf("%3d", ary[i]);
    printf("\n");
    return 0;
}// main