/*
 * array.c
 *Write a program that asks the user to enter the numbers from I to 16 (in any order) and then
displays the numbers in a 4 by 4 arrangement, followed by the sums of the rows, columns,
and diagonals
 *  Created on: May 6, 2026
 *      Author: Manush-Sir
 */
#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,r1,r2,r3;
printf("We will add all the diagonals that you give us \n");
printf("Please enter the digits between 1 to 16 in any order\n");
scanf("%d %d %d %d %d %d %d %d %d %d %d %d ",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k,&l,&m,&n,&o,&p);
r1=a+b+c+d;
r2=e+f+g+h;
r3=i+j+k+l;
printf("\n\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n",a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p);
printf("\nThe sum of first row is %d , Second row is %d and third row is %d\n",r1,r2,r3);
return 0;
}
