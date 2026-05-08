/*
 * avgmarks.c
 *Find average marks of class
 *  Created on: May 7, 2026
 *      Author: Manush-Sir
 */
#include<stdio.h>
int main()
{
int marks[4];
int n = sizeof(marks)/sizeof(marks[0]);
int sum=0;
float avg;
printf("This is marks average for your students grade");
printf("\nPlease enter marks of your Science Grade: ");
scanf("%d",&marks[0]);
printf("\nPlease enter marks of your Math Grade: ");
scanf("%d",&marks[1]);
printf("\nPlease enter marks of your Language Grade: ");
scanf("%d",&marks[2]);
printf("\nPlease enter marks of your French Grade: ");
scanf("%d",&marks[3]);
for (int i = 0; i < n; i++)
{
        sum += marks[i]; // Add each element to sum
        avg =(float) sum/n;
}
    printf("The total grade is: %d\n",sum );
    printf("The average marks of your child is:%f",avg);

    return 0;

}

