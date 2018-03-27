/* This program uses a "for" loop 
to print a line of 60 asterisk.
Written by: Suleman Dawood
Date: 03/27/2018
*/

#include <stdio.h>
//  Function Declarations
void showAsterisk();


void main()
{
showAsterisk();
}   //  main

void showAsterisk()
{
    int i;
    for (i=0; i<59; i++)
    {
        printf("*");
    }   //  for
}   //  showAsterisk