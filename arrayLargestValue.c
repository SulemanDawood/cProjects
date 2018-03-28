/*
 ============================================================================
 Name        :  arrayPrint.c
 Author      :  Suleman Dawood
 Version     :  1.0
 Copyright   : 
 Description : Array Declaration and Print Array in reverse,
                 then parse array to find sum,
                 then uses sum to find floating-point average of array
                 then searches for largest value in array in C.
 ============================================================================
 */

#include <stdio.h>

int arrayFunc();
int arrayFunc1();
int arrayFunc2();
int arrayFunc3();
int arrayFunc4();

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

    printf("The largest element in the array %d", largest);
}   //  arrayFunc4
