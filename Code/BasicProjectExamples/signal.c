/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
/* The traffic light program (nested ifs) */

*******************************************************************************/

#include <stdio.h>

int main()
{
char x;
printf("\nThis programme teaches  Nested iF's using traffic light signal\n");
printf("\nPlease Press R for red, G for green and Y for Yellow Sign :\n");
scanf("%c",&x);
if(x=='R' || x=='r')
{
    printf("\nThis is a STOP Sign, Please stop your car !");
}
else if(x=='G' || x=='g')
{
    printf("\nThis is a GO Sign, Please let your car pass through !");
}
else if(x=='Y' || x=='y')
{
    printf("\nThis is a Yellow Sign, Please prepare to STOP !");
}
else

    printf("wrong user input, please try again");

    return 0;
}