/*
 ============================================================================
 Name        :  printPointer.c
 Author      :  Suleman Dawood
 Version     :  1.0
 Copyright   : 
 Description : This program demonstrates Pointer declaration and use in C.
 ============================================================================
 */

#include <stdio.h>
void pointerFunc();

int main () {

 
   pointerFunc();
   return 0;
   
   
}

void pointerFunc()
{ 
    int  var = 20;   /* actual variable declaration */
    float  flt1 = 1.0;
    char chr1 = 'S';
    
    
    int  *pt;        /* pointer variable declaration */

    float *pt1;
    char *pt2;

    pt = &var;
    pt1 = &flt1;
    pt2 = &chr1;

    printf("The addess of the int pointer is: %x\n", &var);
    printf("This is the  vlaue of int pointer: %d\n", var);
    printf("The addess of the int pointer is: %x\n", pt);
    printf("This is the  vlaue of int pointer: %d\n", *pt);



   
}