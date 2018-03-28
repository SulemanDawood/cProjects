/*
 ============================================================================
 Name        :  arrayPrint.c
 Author      :  Suleman Dawood
 Version     :  1.0
 Copyright   : 
 Description : Array Declaration and Print Array in reverse in C
 ============================================================================
 */

#include <stdio.h>

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
arrayFunc1();
arrayFunc2();

}

int arrayFunc1()
{
    int array[10] = {1, 2,  3,  4,  5,  6,  7,  8,  9,  0};
    int loop;

    for(loop = 0; loop < 10; loop++)
        printf("%d", array[loop]);
}

int arrayFunc2()
{
    int array[10] = {1, 2,  3,  4,  5,  6,  7,  8,  9,  0};
    int loop;

    for(loop = 9; loop =>0; loop--)
        printf("%d", array[loop]);
}