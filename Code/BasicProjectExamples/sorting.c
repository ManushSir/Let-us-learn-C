/*
 * sorting.c
 *Write a program that formats product information entered by the user. A session with the
program should look like this:
Enter item number: 583
Enter unit price: 13.5
Enter purchase date (mm/dd/yyyy): 10/24/2010
Item Unit Purchase
Price Date
583 $ 13.50 10/24/2010
 *  Created on: May 5, 2026
 *      Author: Manush-Sir
 */

# include<stdio.h>
int main()
{
float a,b;
int e,m,y;

printf("\nPlease enter the item number: ");
scanf("%f",&a);
printf("\nPlease enter the item price: \n");
scanf("%f",&b);
printf("\nPlease enter the date in format dd/mm/yyyy : \n");
scanf("%d,%d",&e,&e,&m,&m,&y,&y,&y,&y);
printf("The date entered is : %d%d/%d%d/%d%d%d%d",e,e,m,m,y,y,y,y);
return  0;

}
