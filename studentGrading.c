/*
 ============================================================================
 Name        :  studentGrading.c
 Author      :  Suleman Dawood
 Version     :  1.0
 Copyright   : 
 Date        :  04/14/2018
 Description :  
 This program reads a test score, calculates the 
 letter grade for the score, and prints the grade in C.
 ============================================================================
 */

#include <stdio.h>

//  Function Declarations
    char scoreToGrade (int score);

int main (void)
{
//  Local Declarations
    int score;
    char grade;

//  Statements
    printf("Enter the test score (0-100): ");
    scanf("%d", &score);

    grade = scoreToGrade (score);
    printf("The grade is: %c\n", grade);

    return 0;
}// main

/* ====================== scoreToGrade =========================
    Calculates the letter grade for a score.
    Pre     the parameter score
    Post    returns the grade
*/

char scoreToGrade (int score)
{
//  Local Declarations
    char grade;
    int temp;

//  Statements
    temp = score / 10;
    switch (temp)
        {
        case 10 :
        case 9  : grade = 'A';
                break;
        case 8 : grade = 'B';
                break;
        case 7 : grade = 'C';
                break;
        case 6 : grade = 'D';
                break;
        default: grade = 'F';
        }// switch
    return grade;
}// scoreToGrade