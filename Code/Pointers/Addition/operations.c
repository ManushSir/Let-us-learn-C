#include <stdio.h>

int main()
{
    printf("Hello World!\n");
	float a,b,c;
	float d,e;
	printf(" Please enter the first number : \n");
	scanf("%f", &a);
	printf(" Please enter the Second number : \n");
	scanf("%f", &b);
	printf(" \n\nfirst number is : % f \n the second number is : % f \n\n", a, b);
	c = a + b;
		printf(" The sum of % f and % f is : % f \n\n", a, b, c);
	d = (a-b);
	 printf(" The difference of % f and % f is : % f \n\n", a, b,d);
	e = (a/b);
	printf(" The division of % f and % f is : % f \n\n", a, b,e);
    return 0;
}
