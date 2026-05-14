/*
 * menu.c
 *Menu-Driven Program : We will use do  and while to execute the program
 *  Created on: May 13, 2026
 *      Author: Manush-Sir
 */

#include <stdio.h>
#include "menu.h"

int main()

{
do{
	printf("\nYou will be required to select options from  below :");
	printf(" \nTo select Option 1 , Please press 1 \n");
	printf(" \nTo select Option 2 , Please press 2 \n");
	printf(" \nTo select Option 3 , Please press 3 \n");
	printf("\n Please enter your selection here :");
	scanf("%d",&a);
	switch(a){
	case '1':
		printf("The option you selected is: %d",a);
		/*printf(" \nTo select Option a , Please press a \n");
			printf(" \nTo select Option b , Please press b \n");
			printf(" \nTo select Option c , Please press c \n");
			scanf("%c",&x);
			switch(x){
			case 'a':
			printf("\nYou chose option a : You Die !!\n" );
				break;
			case 'b':
			printf("\nYou chose option b : You are defeated !!\n" );
			break;
			case 'c':
			printf("\nYou chose option C : You Win !!\n" );
			break;
			default :
				printf("\nWrong option, you are and were a looser !!!\n");
			}*/
		break;
	case '2':
			printf("The option you selected is: %d",a);
			break;
	case '3':
			printf("The option you selected is: %d",a);
			break;
	default:
		printf("invalid Entry :  Please try again");
	}
}while(a!=3);
return 0;


}
