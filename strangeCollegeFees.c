/*
 ============================================================================
 Name        :  strangeCollegeFees.c
 Author      :  Suleman Dawood
 Version     :  1.0
 Copyright   : 
 Description : This program prints the tuition at Strange College.
                Strange charges $10 for registration, plus $10 per
                unit and a penalty of $50 for each 12 units, or
                fraction of 12, over 12 in C.              
 ============================================================================
 */

#include <stdio.h>

#define REG_FEE     10
#define UNIT_FEE    10
#define EXCESS_FEE  50

//  Function Declaration
int calcFee     (int firstTerm, int secondTerm,
                int thirdTerm);
int termFee     (int units);

int main(void)
{
//  Local Declarations
    int firstTerm;
    int secondTerm;
    int thirdTerm;
    int totalFee;

//  Statements
    printf("\nEnter units for the first term: ");
    scanf("%d", &firstTerm);

    printf("\nEnter units for the second term: ");
    scanf("%d", &secondTerm);

    printf("\nEnter units for the third term: ");
    scanf("%d", &thirdTerm);    

    totalFee = calcFee
                (firstTerm, secondTerm, thirdTerm);
    printf("\nThe total tuition is %8d\n", totalFee);

    return 0;
}// main

/* ================= calcFee ======================
    Calculate the total fee for the year.
    Pre     The number of units to be taken each term.
    Post    Returns the annual fees.
*/

int calcFee     (int firstTerm, int secondTerm,
                int thirdTerm)
{
//  Local Decalarations
    int fee;

//  Statements
    fee = termFee (firstTerm)
            + termFee (secondTerm)
            + termFee (thirdTerm);
    return fee;
}// calcFee

/* ================= termFee ======================
    Calculate the tuition for one term.
    Pre     units contains units for the term.
    Post    The fee is calculated and returned.
*/
int termFee (int units)
{
//  Local Declarations
    int totalFees;

//  Stataments
    totalFees = REG_FEE
                + ((units - 1)/12 * EXCESS_FEE)
                + (units * UNIT_FEE);
    return (totalFees);
}// termFee