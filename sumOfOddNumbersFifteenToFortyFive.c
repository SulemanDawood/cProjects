/* This program uses "for" loop 
to print the some of numbers between 15 and 45 inclusive.
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
 int sum = 0;
 for (i = 15; i <= 45; i+= 2)
    {
        sum = sum + i;
        
    }   //  for
    printf("%d\t\n", sum);
}   //  seq1