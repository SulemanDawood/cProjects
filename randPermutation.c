/*
 ============================================================================
 Name        :  randomPermutation.c
 Author      :  Suleman Dawood
 Version     :  1.0
 Copyright   : 
 Description : This program generates a random number permutation in C.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define ARY_SIZE 20

//  Function Declarations
void bldPerm    (int randNums[ ]);
void printData  (int data[], int size, int lineSize);

int main(void)
{
//  Local Declarations
    int randNums [ARY_SIZE];

//  Statements
    printf("Begin Random Permutations Generation: \n");

    bldPerm     (randNums);
    printData   (randNums, ARY_SIZE, 10);

    return 0;
}// main

/* ====================== bldPerm =========================
    Genreate a arandom number permutation in array.
    Pre     randNums is array to recieve permutations
    Post    randNums is filled
*/

void bldPerm (int randNums[])
{
//  Local Declarataions
    int oneRandNum ;
    int haveRand[ARY_SIZE] = {0};

//  Statements
    for (int i = 0; i < ARY_SIZE; i++)
        {
        do
            {
            oneRandNum = rand() % ARY_SIZE;
            }   while (haveRand[oneRandNum]==1);
        haveRand[oneRandNum] = 1;
        randNums[i] = oneRandNum;
        }// for
    return;
}// bldPerm

/* ====================== printData =========================
    Prints the data as a two-dimensional array.
    Pre     data: a filled array
            last: index to last elemnt to be printed
            lineSize: number of elements on a line
    Post    data printed
*/

void printData  (int data[], int size, int lineSize)
{
//  Local Declarations
    int numPrinted = 0;

//  Statement
    printf("\n");
    for (int i = 0; i < size; i++)
        {
        numPrinted++;
        printf("%2d",)
        }
}