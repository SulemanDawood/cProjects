/* This program uses "for" loop 
to print the sequence of 50 iterations 
in the series 1,4,7,10..... 
Then calculates the sum of 
all the numbers in the sequence.

Written by: Suleman Dawood
Date: 03/27/2018
*/

#include <stdio.h>
void seq1();

void main()
{
    seq1();
}   //  main

void seq1()
{
 int i;
 int x = 1;
 int sum = 0;

 for (i = 1; x<=50; i+= 3)
    {
        printf("%d\t", i);
        sum =  sum + i;
        x++;
        
    }   //  for
    printf("\n%d\t", sum);
}   //  seq1