/*
 ============================================================================
 Name        : Ex01.c
 Author      : Alaa
 Version     : Jul 24, 2015
 Copyright   : AMIT Learning
 Description : This program is part of C Course On AMIT Learning
 	 	 	   Session 4: macros
 ========================================================
 Write the following macro
 DISP(f,x) that expands into a call of printf

 DISP(sqrt, 3.0);
 should expand into
 printf("sqrt(%g) = %g\n", 3.0 , sqrt(3.0));
 ============================================================================
 */

#include<stdio.h>
#include <math.h>
#define DISP(f,x) f(x)
// Main subroutine
int main(void){
    long double x,y,z;
    scanf("%d", &x);
    z= sqrtl(x);
    printf("sqrt(%ld) = %ld\n", x , z);
return 0;
}
