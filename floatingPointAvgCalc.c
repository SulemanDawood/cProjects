/* This program prompts user to enter an integer 
to calculate average of
input integer amount of positive floating-point numbers,
then displays average on the screen.

Written by: Suleman Dawood
Date: 03/27/2018
*/

#include <stdio.h>
void avgfp();

int main()
{
    avgfp();
}   //  main

void avgfp()
{
 int n,i,count=0;
 float fpNumber, average = 0,sum = 0;
printf("This program reads numbers inputted through the keyboard.\n");
printf("Then takes the average of the positive numbers\n");
printf("Please enter the amount of numbers your would like to average 'n': \n", n);
scanf("%d", &n);

for(i=1; i<=n; i++)
    {
        printf("%d Please enter floating-point number: \n", i);
        scanf("%f", &fpNumber);
        if(fpNumber >= 0)
            { count++;
            sum = sum + fpNumber;
            
             }  //  if

    }   //  for
    printf("You have entered %d positive numbers\n", count);
    average = sum/count;
    printf("Average of positive numbers is: %f", average);
}   //  avgfp
 