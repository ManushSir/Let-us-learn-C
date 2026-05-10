/*
 * nstdlip.c
 *We will used nested loop
 *  Created on: May 9, 2026
 *      Author: Manush-Sir
 */
#include <stdio.h>
#define SIZE 20
int main ()
{
	int i=1;
 while (i<=SIZE)
{
	printf("\n");
	int j=1;
	while(j<=i)
	{
		printf("%d",j);
		j++;
	}
i++;
}
return 0;
}

