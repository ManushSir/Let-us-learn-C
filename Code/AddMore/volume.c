/*
 ============================================================================
 Name        : volume.c
 Author      : Manush
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int length,width,height,volume;

	printf("\nThis is the program to measure volume of Cubiod\n");/* prints !!!Hello World!!! */
	printf("\n  Please Enter the height in meters:\n");
	scanf("%d",&height);
	printf("\n  Please Enter the width in meters:\n");
	scanf("%d",&width);
	printf("\n  Please Enter the length in meters:\n");
	scanf("%d",&length);
	volume=length*width*height;
	printf("\nThe volume of the cuboid is: %d meter cube",volume);
	return EXIT_SUCCESS;
}
