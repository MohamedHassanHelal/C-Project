/*
 * Ex06.c
 *
 *  Created on: Jul 11, 2015
 *      Author: Alaa
 */

/* ****************************************************************
 * **Write a function check(x, y, n) that returns 1 if x and y******
 * ****fall between 0 and n-1, inclusive. and return 0 otherwise****
 * *****************************************************************
 * *****************************************************************
 */

#include <stdio.h>

#define N 5

int check(int x,int y);

int main (void){
    int a,b,z;
    scanf("%d", &a);
    scanf("%d", &b);
    z=check(a,b);
return z;
}

int check(int x,int y){
    if(0<x && x<N-1 && 0<y && y<N-1){return 1;}
    else return 0;
}
