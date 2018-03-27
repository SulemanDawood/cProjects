/* This program uses "for" loops 
to print sequences of numbers.
Written by: Suleman Dawood
Date: 03/27/2018
*/

#include <stdio.h>
//  Function Declarations
void seq1();
void seq2();

void main()
{
seq1();
seq2();
}   //  main

void seq1()
{
    int i = 6;
    for (i=6; i<67; i+=2)
    {
        printf("%d\t", i);
    }   //  for
    printf("\n");
}   //  seq1

void seq2()
{
    int i = 7;
    for (i=7; i<68; i+=2)
    {
        printf("%d\t", i);
    }   //  for
}   //  seq2