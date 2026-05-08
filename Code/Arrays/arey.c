/*
 * arey.c
 *We will  learn what Array is
 *  Created on: May 7, 2026
 *      Author: Manush-Sir
 */

# include<stdio.h>
int main()
{
int numbers[10]={3,4,5,6,7,8,9,3,4,5};
++numbers[1];/*This increments the number in array 1 by 1*/
--numbers[3];/*This command decreases the number by 1*/
printf("\nThe first digit in array 0 is :%d\n", numbers[0] );
printf("\nThe first digit in array 1 is :%d\n", numbers[1] );
printf("\nThe first digit in array 2 is :%d\n", numbers[2] );
printf("\nThe first digit in array 3 is :%d\n", numbers[3] );
printf("\nThe first digit in array 4 is :%d\n", numbers[4] );
printf("\nThe first digit in array 5 is :%d\n", numbers[5] );
printf("\nThe first digit in array 6 is :%d\n", numbers[6] );
}
