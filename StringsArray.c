/*
 ============================================================================
 Name        :  StringsArray.c
 Author      :  Suleman Dawood
 Version     :  1.0
 Copyright   : 
 Description : This program demonstrates different 
                ways to use char type string arrays in C.
 ============================================================================
 */

#include <stdio.h>
char strArray();


void main()
{
strArray();

}


char strArray()
{
    char str[] = "Hello World";

    printf("%s\n", str);
}