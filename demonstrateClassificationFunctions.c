/*
 ============================================================================
 Name        :  demonstrateClassificationFunctions.c
 Author      :  Suleman Dawood
 Version     :  1.0
 Copyright   : 
 Date        :  04/15/2018
 Description :  
 This program demonstrates the use of the character
 classification functions in the c-type library.
 Given a character, it displays the highest
 classification for the character in C.
 ============================================================================
 */

#include <stdio.h>
#include <ctype.h>

int main (void)
{
//  Local Declarations
    char charIn;

//  Statements
    printf("Enter a character to be examined: ");
    scanf("%c", &charIn);

    if (islower(charIn))
        printf("You have entered a lowercase letter.\n");
    else if (isupper(charIn))
        printf("You have entered an uppercase letter.\n");
    else if (isdigit(charIn))
        printf("You have entered a digit.\n");
    else if (ispunct(charIn))
        printf("You have entered a punctuaction character.\n");
    else if (isspace(charIn))
        printf("You have entered a whitesapce character.\n");
    else
        printf("You have entered a control character.\n");
    return 0;
}// main