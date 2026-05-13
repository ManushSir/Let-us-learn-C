/*
 * nested.c
 *
 *  Created on: May 13, 2026
 *      Author: Manush-Sir
 */
#include <stdio.h>
#include "nest.h"

int main()
{
printf("\n\nLet us check how nested loop works :\n" );
for(i=ZERO;i<=5;i++){

	for(j=ONE;j<=4;j++){

		printf("\n\nThe Value of i is : %d and value of j is : %d\n\n",i,j);
	}
}
return 0;
}

