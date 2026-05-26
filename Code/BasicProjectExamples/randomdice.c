/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<time.h>
#include <stdlib.h>

int main()
{
 srand (time(NULL));
  int d=(rand() % 6) + 1;
 /*srand (time(NULL));*/
 printf("This programme is to genearate DICE ");
 printf("Everytime  this programe executes, a random number between 1  t0 6 will be genarated");
 printf("The dice value is : %d",d);

    return 0;
}