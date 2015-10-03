/*
 * Ex08.c
 *
 *  Created on: Jul 11, 2015
 *      Author: Alaa
 */

/* *********************************************************************
 * **Write a function that computes the value of the following***********
 * **polynomial: 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6***********************
 * **********************************************************************
 */

#include <stdio.h>
#define poly(x) ((((3*x + 2 )*x- 5 )*x- 1 )*x+ 7 )*x- 6
int main (void){
    int y,x;
    printf("Please enter the value of x to compute this function \n\n\t 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6\n");
    scanf("%d",&x);
    y=poly(x);
    printf("\nThe result= %d\n",y);

return 0;
}
