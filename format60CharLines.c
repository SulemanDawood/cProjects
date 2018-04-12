/*
 ============================================================================
 Name        :  format60CharLines.c
 Author      :  Suleman Dawood
 Version     :  1.0
 Copyright   : 
 Description : This program accepts a file of varying-length 
                lines and changes it to a formatted file with 
                60 characters in each line in C.              
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
//  Opening a new stream to file1
    FILE *spdata;
    if ((spdata = fopen("gettysburgadd.rtf","r"))==NULL)
        printf("First file Opening Error\n");
//  Opening a new stream to file2
    FILE *spdata1;
    if ((spdata1 = fopen("gettysburgadd.rtf","a"))==NULL)
        printf("Second file Opening Error\n");
    while(fscanf(spdata,"%c",&ch)!=-1)
    {
        fprintf(spdata1,"%c",ch);
    }// while
    return 0;
}// main