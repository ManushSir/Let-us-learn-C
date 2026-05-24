/*
 * readwrite.c
 *This programme we will learn to read and write new file. I have created a read file  and a write file.
 * The myfirstread.txt read file from  database and we will write it in the myfirstwrite.txt
 *  Created on: May 23, 2026
 *      Author: Manush-Sir
 */
#include<stdio.h>
int main()
{
	FILE *x,*y;
	char name[1000];
	x=fopen("myfirstwrite.txt","w");
	y=fopen("myfirstread.txt","r");
	fscanf(y,"%s",&name);
	fprintf(x,"\n\n Hi !, This is my first time writing on a file \n\n I will try my best to work more !");
	fprintf(x,"\n\n %s",name);
	fclose(x);
	fclose(y);
	return 0;
}
