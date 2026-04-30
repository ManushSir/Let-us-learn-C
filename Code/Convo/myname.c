#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{
	char naam[10];
	char fud[50];
	char work[10];
	printf("\nYo Fam, What is your name ?\n");
	scanf("%s", naam);
	printf("\n\nYo nice to meet you %s, my name is AiggNtron!\n\n", naam);
	printf("\n\nYo %s, What is your favorite food ?\n\n", naam);
	scanf("%s", fud);/* %s is special pointer for character*/
	printf("\n\nYo %s, that is great ! %s is my favorite food too !\n\n", naam, fud);
	printf("\n\nYo %s, what do you work at ?\n\n",naam);
	scanf("%s", work);
	printf("\n\nYo %s , %s is a very good place to work at!!\n\n ", naam, work);
	return 0;
}
