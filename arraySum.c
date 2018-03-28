/*
 ============================================================================
 Name        :  arrayPrint.c
 Author      :  Suleman Dawood
 Version     :  1.0
 Copyright   : 
 Description : Array Declaration and Print Array in reverse,
                 then parse array to find sum in C.
 ============================================================================
 */

#include <stdio.h>

int arrayFunc();
int arrayFunc1();
int arrayFunc2();


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

}   //  main

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