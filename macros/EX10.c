/*
 ============================================================================
 Name        : Ex01.c
 Author      : Alaa
 Version     : Jul 24, 2015
 Copyright   : AMIT Learning
 Description : This program is part of C Course On AMIT Learning
 	 	 	   Session 4: macros
 ========================================================
 Write the following parameterized macros
 CHECK(x,y,n) -- has the value 1 if both x and y fall between 0 and n-1
 PLOYNOMIAL(x) -- computes the polynomial 3x^5 + 2x^4 -5x^3 - x^2 +7x -6
 ============================================================================
 */

#include<stdio.h>
#define poly(x) ((((3*x + 2 )*x- 5 )*x- 1 )*x+ 7 )*x- 6
#define N 5

int check(int x,int y);

int main (void){
    int a,b,y,z;
    scanf("%d", &a);
    scanf("%d", &b);
    z=check(a,b);
    y=poly(a);
     printf("\nThe result= %d\n",y);
      printf("\nThe result= %d\n",z);
return z;
}

int check(int x,int y){
    if(0<x && x<N-1 && 0<y && y<N-1){return 1;}
    else return 0;
}


