/*
 * randum.h
 *
 *  Created on: May 16, 2026
 *      Author: Manush-Sir
 */

#ifndef RANDUM_H_
#include<string.h>
#define RANDUM_H_
#define size 10
char c;
char rps [size][3]={"Rock","Paper","Scissor"};
char k = rps[rand() % (sizeof(rps) - 1)];
int x=0;
int i,j;


#endif /* RANDUM_H_ */
