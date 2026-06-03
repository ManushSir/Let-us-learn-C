/*
 * matx.c
 *This program is designed to add two matrix and then add them
 * Created on: June 2, 2026
 * Author: Manush-Sir
 */

#include<stdio.h>
#include<conio.h>

int main()
{
int mat[3][3]={{1,2,3},{5,6,7},{9,10,11}};
int mat2[3][3]={{1,1,1},{2,2,2},{3,3,3}};
int mat3[3][3];

printf("\nThe first matrix is:\n");

for (int i=0;i<3;i++){

for(int j=0;j<3;j++){
	printf("%d\t",mat[i][j]);

}

	printf("\n");
}
printf("The second matrix is:\n");
for (int i=0;i<3;i++){

for(int j=0;j<3;j++){
	printf("%d\t",mat2[i][j]);

}

	printf("\n");
}

for (int i=0;i<3;i++){

for(int j=0;j<3;j++){

	mat3[i][j]=mat[i][j]+mat2[i][j];

}

	printf("\n");
}
printf("The sum of two matrix is:\n");
for (int i=0;i<3;i++){

for(int j=0;j<3;j++){

	printf("%d\t",mat3[i][j]);

}
printf("\n");
}
return 0;
}
