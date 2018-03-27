/* This program demonstrates a function call that takes in ana array as a parameter
Written by: Suleman Dawood
Date: 03/27/2018

*/



#include <stdio.h>

void aryParam(int array[]);



void main()
{
int intArray[] = {1,2,3};
char charArray[] = {'a','b','c'};
float fltArray[] = {1.1,1.2,1.3};

//printf("%d\n", intArray[0]);

aryParam(intArray);

}


void aryParam(int array[] )
{
    //printf("%d\n", array[0]);
    int i;
    for (i=0; i<3; ++i)
    {
        printf("%d\n", array[i]);
    }
    
}

