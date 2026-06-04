/*
 * filenaray.c
 *We will make a file , the array read  the data and then display in another folder the result is not as expected. need to work more
 *  Created on: June 3, 2026
 *      Author: Manush-Sir
 */

#include<stdio.h>
#include<conio.h>

int main(void){
FILE *x,*y;

int array[3][3];
x= fopen("data.txt","r");
y=fopen("Matrix_Display.txt","w");
for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			fscanf(x,"%d", &array[i][j]);
		}
	}
	fprintf(y,"The Matrix is as below:\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			fprintf(y,"%d/t",array[i][j]);
		}
		fprintf(y,"\n");
	}
	fclose(x);
	fclose(y);
return 0;
}
