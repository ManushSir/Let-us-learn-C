// add_num.c : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{
    printf("Hello World!\n");
	int a, b;
	printf(" Please enter the first number : \n");
	scanf("%d", &a);
	printf(" Please enter the Second number : \n");
	scanf("%d", &b);
	printf(" first number is : % d & the second number is : % d \n\n", a, b);
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
