#include <stdio.h>

int main()
{
	int a, b, c;
	printf(" Please enter the first number : \n");
	scanf_s("% d",&a);
	printf(" Please enter the Second number : \n");
	scanf_s("% d",&b);
	printf(" first number is : % d & the second number is : % d \n\n", &a, &b);
	return 0;

}
