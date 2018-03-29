/*
 ============================================================================
 Name        :  arrayPrint.c
 Author      :  Suleman Dawood
 Version     :  1.0
 Copyright   : 
 Description : Array Declaration and Print Array in reverse,
                * parses array to find sum,
                * uses sum to find floating-point average of array
                * then searches for largest and second largest value in array
                * Copies an array of 10 elements into another array of 10 elements
                * Copies an array of 10 elements into another array in reverse of 10 elements in C.
 ============================================================================
 */

#include <stdio.h>

int arrayFunc();
int arrayFunc1();
int arrayFunc2();
int arrayFunc3();
int arrayFunc4();
int arrayFunc5();
int arrayFunc6();
int arrayFunc7();

int main() 
{
 /*  int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
   int loop;

   for(loop = 0; loop < 10; loop++)
      printf("%d ", array[loop]);
      
   return 0;
*/
arrayFunc();
arrayFunc1();
arrayFunc2();
arrayFunc3();
arrayFunc4();
arrayFunc5();
arrayFunc6();
arrayFunc7();

}   //  main


// Reads array and prints in order using "for" loop.
int arrayFunc()
{
    int array[10] = {1, 2,  3,  4,  5,  6,  7,  8,  9,  0};
    int loop;

    for(loop = 0; loop < 10; loop++)
       {
           printf("%d", array[loop]);
       }    //  for
       printf("\n");
}   //  arrayFunc

// Reads array and prints in reverse order using "for" loop.
int arrayFunc1()
{
    int array[10] = {1, 2,  3,  4,  5,  6,  7,  8,  9,  0};
    int loop;

    for(loop = 9; loop >= 0; loop--)
       {
            printf("%d", array[loop]);
       }    //  for
    printf("\n");
}   //  arrayFunc1

// Reads array and prints sum using "for" loop.
int arrayFunc2()
{
    int array[10] = {1, 2,  3,  4,  5,  6,  7,  8,  9,  0};
    int sum, loop;

   sum = 0;
   
   for(loop = 9; loop >= 0; loop--) 
   {
      sum = sum + array[loop];      
   }    //  for

   printf("Sum of array is %d.\n", sum);
}   //  arrayFunc2

// Reads array and prints average of array values using "for" loop and float.
int arrayFunc3()
{ int array[10] = {1, 2,  3,  4,  5,  6,  7,  8,  9,  0};
    int sum, loop;
    float avg;

   sum = avg = 0;
   
   for(loop = 0; loop < 10; loop++) 
   {
      sum = sum + array[loop];      
   }    //  for

    avg = (float)sum / loop;
    printf("Average of array values is %.2f.\n", avg);
}   //  arrayFunc3

// Uses for loop to find largest value in array
int arrayFunc4()
{
    int array[10] = {1, 2,  3,  4,  5,  6,  7,  8,  9,  0};
    int loop, largest;

    largest = array[0];

    for(loop=0; loop <10; loop++)
    {
        if(largest<array[loop])
        largest = array[loop];
    }   //  for

    printf("The largest element in the array is: %d\n", largest);
}   //  arrayFunc4


// Uses "for" loop to find second largest value in array
int arrayFunc5()
{
    int array[10] = {1, 2,  3,  4,  5,  6,  8,  9,  0};
    int loop, largest, second;

    if(array[0]>array[1])
    {
        largest = array[0];
        second = array[1];
    }   //  if
    else
    {
        largest = array[1];
        second = array[0];
    }   //  else
    for(loop=2; loop<10; loop++)
    {
        if(largest < array[loop])
        {
            second = largest;
            largest = array[loop];
        }   //  if
        else if (second < array[loop])
        {
            second = array[loop];
        }   //  else if

    }   //  for
    printf("The second largest element in the array is: %d\n", second);
}   //  arrayFunc5

// Copies contents from an array into another
int arrayFunc6()
{
    int original[10] = {1, 2,  3,  4,  5,  6,  7,  8,  9,  0};
    int copied[10];
    int loop;

    for (loop = 0; loop < 10; loop++)
    {
        copied[loop] = original[loop];
    }   //  for
    printf("Original array copied to another array\n");

    for (loop = 0; loop < 10; loop++)
    {
        printf("Original: %2d\t Copied: %2d\n", original[loop], copied[loop]);
    }   //  for

}   //  arrayFunc6

// Copies and array into another array in reverse.

int arrayFunc7()
{
    int array1[10] = {1,    2,  3,  4,  5,  6,  7,  8,  9,  0};
    int array2[10], loop, count = 9;

    for (loop = 0; loop < 10; loop++)
    {
        array2[count] = array1[loop];
        count--;
    }   //  for

     printf("Array 1 copied to Array 2\n");

    for (loop = 0; loop < 10; loop++)
    {
        printf("Array 1: %2d\t Array 2: %2d\n", array1[loop], array2[loop]);
    }   //  for

}   //  arrayFunc7