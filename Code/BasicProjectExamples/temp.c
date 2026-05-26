/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
A program that asks the user for a temperature and 
displays a different message if the temperature is above or below 20 degrees.

*******************************************************************************/

#include <stdio.h>

int main()
{
int *t,temp;
printf("\nThis programme is designed to provide weather analysis\n");
printf("\nPlease provide the current temprature in degrees:");
scanf("%d",&temp);
t=&temp;
/*printf("\nThe value of temp is: %d\n",temp);
printf("\nThe value of our pointer is :%d",*t);*/
if(*t>=0 && *t<=10)
{
    printf("The tempreture is tooo cold ! Take Care , The temprature is:%d  degree celcius",*t);
}
else if(*t>=10 && *t<=20)
{
    printf("The weather is pretty ok ,, wear light jacket, the weather is ; %d",*t);
}
else (*t>=25 && *t<=0);
{
    printf("\nThe weather is beyond my range !! Please try again !");
    
}
    return 0;
}