/*
 ============================================================================
 Name        : Ex01.c
 Author      : Alaa
 Version     : Jul 24, 2015
 Copyright   : AMIT Learning
 Description : This program is part of C Course On AMIT Learning
 	 	 	   Session 4: conditional preprocessor
 ========================================================
 suppose that the program needs to display messages in either
 English, French or Spanish.

 using conditional compilation, write a program fragment that displays
 one of the following messages.

 Insert Disk 1 			(if ENGLISH is defined)
 Insert Le Disque 1		(if FRENSH is defined)
 Insert El Disco 1		(if SPANICH is defined)
 ============================================================================
 */

#include<stdio.h>
#include <math.h>

#if z 1

printf("Insert Disk");

#elif z 2
printf(" Insert Le Disque");

#elif z 3
printf(" Insert El Disco");

#endif
// Main subroutine
int main(void){
    char z,x;
    printf("\tplease choose your language type\n"
           "\n\t1-English\n\t2-FRENSH\n\t2-SPANICH\n\t ");
    scanf("%c", &z);


return 0;
}
