/*
 ============================================================================
 Name        :  topDownDevExample.c
 Author      :  Suleman Dawood
 Version     :  1.0
 Copyright   : 
 Date        : 04/12/2018
 Description : This program is a sample of top- down developement
                using stubs in C.              
 ============================================================================
 */

#include <stdio.h>

//  Function Declarations
    int initialize (void);
    int process    (void);
    int endOfJob   (void);

int main(void)
{
//  Statements
    printf("Begin program \n\n");

    initialize();
    process();
    endOfJob();
    return 0;
}// main

/* ================= initialize ======================
    Stub for initialize.
*/
int initialize (void)
{
//  Statements
    printf("In initialize: \n");
    return 0;
}// initialize

/* ================= process ======================
    Stub for process.
*/
int process(void)
{
//  Statements
    printf("In process: \n");
    return 0;
}// process

/* ================= endOfJob ======================
    Stub for endOfJob.
*/
int endOfJob(void)
{
//  Statements
    printf("in endOfJob: \n");
    return 0;
}// endOfJob