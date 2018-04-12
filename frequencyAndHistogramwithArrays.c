/*
 ============================================================================
 Name        :  frequencyAndHistogramwithArrays.c
 Author      :  Suleman Dawood
 Version     :  1.0
 Copyright   : 
 Description : This program builds frequency array
                & prints data in histogram in C.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define     MAX_ELMNTS 100
#define     ANLYS_RNG 20

//  Function Declarations
    int getData (int numbers[], int size,   int range);

    void printData      (int numbers[], int size,   int lineSize);

    void makeFrequency  (int numbers[],     int size,
                        int frequency[],    int range);

    void makeHistogram  (int frequency[],   int range);

void main()
{
//  Local Declarations
    int size;
    int numbers     [MAX_ELMNTS];
    int frequency   [ANLYS_RNG];

//  Statements
    size = getData  (nums, MAX_ELMNTS, ANLYS_RNG);
    printData       (nums,  size,   10);

    makeFrequency(nums, size, frequency, ANLYS_RNG);
    makeHistogram(frequency,    ANLYS_RNG);
    return 0;
}// main

/* ================= getData ======================
    Read data from file into array. The array 
    does not have to be completely filled
    Pre     data is an empty array
            size is maximum elements in array
            range is highest value allowed
    Post    array is filled. Return number of elements
*/

int getData (int numbers[], int size,   int range)
{
//  Local Declarations
    int dataIn;
    int loader = 0;
    FILE* fpData;

//  Statements
    if (!(fpData = fopen ("P08-07.dat" "r")))
        printf("Error opening file \a\a\n"), exit(100);

    while (loader < size
            && fscanf(fpData, "%d", &dataIn)!=EOF)
        if (dataIn >=  0 && dataIn < range)
            data[loader++] = dataIn;
        else 
            printf("\nData point %d invalid. Ignored. \n",
            dataIn);

//  Test to see what stopped while
    if (loader = size)
        printf("\nToo much data. Process what read.\n");
    return loader;
}// getData

/* ================= printData ======================
    Prints data as a two dimentsional array.
    Pre     data: a filled array
            size: number of elements in array
            lineSize: number of elements printed/line     
    Post    the data has been printed
*/

void printData      (int numbers[], int size,   int lineSize)
{
//  Local Declarations
    int numPrinted = 0;

//  Statements
    printf("\n\n");
    for (int = 0; i < size; i++)
        {
            numPrinted++;
            printf("%2d", data[i]);
            it (numPrinted >= lineSize)
                {
                    printf("\n");
                    numPrinted = 0;
                }// if
        }// for
    printf("\n\n");
    return;
}// printData

/* ================= makeFrequency ======================
    Analyze the data in nums and build their frequency
    distribution
    Pre     nums: array of validated data to be analyzed
            last: number of elements in array
            frequency: array for accumulation
            range: maximum index/value for frequency     
    Post    Frequency array has been built
*/

void makeFrequency  (int numbers[],     int size,
                        int frequency[],    int range)
{
//  Statements
    //  First initialize the frequency array
    for (int f = 0; f < range; f++)
        frequency[f] = 0;

    //  Scan number and build frequency
    for(int i = 0; i < last; i++)
        frequency[nums[i]]++;
    return;
}//     makeFrequency

/* ================= makeHistogram ======================
    Print a histogram representing analyzed data
    Pre     frequency contains times each value occured
            size represents elements in frequency array     
    Post    histogram has been printed
*/

void makeHistogram  (int frequency[],   int range)
{
//  Statements
    for(int i = 0; i < range; i++)
        {
            printf("%2d %2d ",i, freq[i]);
            for (int j = 1; j <= freq[i]; j++)
                printf("*");
            printf("\n");
        }// for i...
    return;
}// makeHistogram
//  ================= End of Program ======================