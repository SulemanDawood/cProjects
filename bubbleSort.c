/*
 ============================================================================
 Name        :  bubbleSort.c
 Author      :  Suleman Dawood
 Version     :  1.0
 Copyright   : 
 Description : This program sorts a list using bubble sort.
                Adjacent elements are compared and exchanged 
                until list is ordered. in C.
                Pre     the list must contain atleast one item
                        last contains index to last element in list.
                Post    list rearranged in sequences low to high.
 ============================================================================
 */

void bubbleSort(in list[], int last)
{
//  Local Declarations
    int temp;

//  Statements
    //Outer loop
    for (int current = 0; current < last; current++)
        {
        //  Inner loop: Bubble up one element each pass
        for (int walker = last;
                walker > current;
                walker--)
            if (list[walker] < list[walker - 1])
                {
                    temp            = list[walker];
                    list[walker]    = list[walker - 1];
                    list[walker - 1]= temp;
                }// if
        }// for current
    return;
}// bubbleSort
