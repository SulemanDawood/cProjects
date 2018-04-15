/*
 ============================================================================
 Name        :  convertScoreToGrade.c
 Author      :  Suleman Dawood
 Version     :  1.0
 Copyright   : 
 Date        :  04/14/2018
 Description :  
 This program reads a test score, calculates the letter grade 
 based on the absolute scale, and prints the grade using if-else in C.
 ============================================================================
 */

#include <stdio.h>

//  Function Declaration
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
}//  main

/* ====================== scoreToGrade =========================
    Calculates the letter grade for a score.
    Pre     the parameter score
    Post    returns the grade
*/

char scoreToGrade (int score)
{
//  Local Declarations
    char grade;

//  Statements
    if (score >= 90)
        grade = 'A';
    else if (score >= 80)
        grade = 'B';
    else if (score >= 70)
        grade = 'C';
    else if (score >= 60)
        grade = 'D';
    else
        grade = 'F';

    return grade;
}// scoreToGrade