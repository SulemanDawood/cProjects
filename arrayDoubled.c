/*
 ============================================================================
 Name        :  ArrayDoubled.c
 Author      :  Suleman Dawood
 Version     :  1.0
 Copyright   : 
 Description : This program multiplies each element in an array by 2 in C.
 ============================================================================
 */

#include <stdio.h>
//  Function Declaration
void multiply2 (int x[ ]);

void main()
{
//  Local Declarations
    int base [5] = {3,  7,  2,  4,  5};

//  Statements
    multiply2 (base);

    printf("Array now contains: ");
    for (int = 0; i < 5; i++)
        printf("%3d", base[i]);
    printf("\n");
    return 0;
}// main

/* ================= multiply2 ======================
    Multiply each element in array by 2.
    Pre     array contains data
    Post    each element is doubled
*/

void multiply2 (int x[ ])
{
//  Statements
for ( int i = 0; i < 5; i++)
        ary[i] *=2;
    return;
}// multiply2