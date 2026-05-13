/*
 * elseif.c
 *Create a project with else  if database to compare two numbers.
 *  Created on: May 12, 2026
 *      Author: Manush-Sir
 */

#include<stdio.h>
#include "first.h"
int main()
{
printf("\nWe are about to check the number is big or small");
for(i=0;i<=5;i++){
printf("\n please enter the first number:");
scanf("%d",&a);
printf("\n please enter second number:");
scanf("%d",&b);

if(a==b){
	printf("\nThey both are equal\n");
}
else if(a<b){
	printf("\n%d is less than %d\n",a,b);
}
else if(a>b){
	printf("\n%d is greater than %d\n",a,b);
}
else {
	printf("\n%d and %d are not equal\n",a,b);
}
}
printf("\n\n!!!!!!Your five chances are over!!!!\n\n");
return 0;
}
