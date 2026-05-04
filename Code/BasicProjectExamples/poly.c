/*
 * poly.c
 *Write a program that asks the user to enter a value for .v and then displays the value of the
following polynomial:
3x^5+2x^4-5x^3-x^2+7x-6
 *  Created on: May 4, 2026
 *      Author: Manush-Sir
 */
#include<stdio.h>

int main(void)
{
	int x,p;
printf("\nWe will learn to write the following polynomial:3x^5+2x^4-5x^3-x^2+7x-6\n");
printf("\n\n Please enter the value of x: \n\n");
scanf("%d",&x);
p = (3*x*x*x*x*x)+(2*x*x*x*x)-(5*x*x*x)-(x*x)+(7*x)-6;
printf("\nThe Value of x was :\t%d",x);
printf("\nThe final value of polynomial is:\t%d",p);
return 0;
}

