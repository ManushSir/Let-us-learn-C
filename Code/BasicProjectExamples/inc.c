/*
 * inc.c
 *Increment and Decrement of the number
 *  Created on: May 8, 2026
 *      Author: Manush-Sir
 */
#include <stdio.h>
int main()
{
	int a,b;

	for (a=-1;a<=10;a++)/*Statement 1 sets a variable before the loop starts: int i = 0 .Statement 2 defines the condition for the loop to run: i < 5. If the condition is true, the loop will start over again, if it is false, the loop will end.Statement 3 increases a value each time the code block in the loop has been executed: i++*/
	{
	printf("\nThe increment number is :%d\n",a);
	}
	for (b=10;b>=10;b--)/*Statement 1 sets a variable before the loop starts: int i = 0 .Statement 2 defines the condition for the loop to run: i < 5. If the condition is true, the loop will start over again, if it is false, the loop will end.Statement 3 increases a value each time the code block in the loop has been executed: i++*/
    {
	printf("\nThe decrement number is :%d\n",b);
	}
return 0;
}
