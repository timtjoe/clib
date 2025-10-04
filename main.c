#include "header.h"
#include <stdio.h>

/*
* main entry point.
* 
* Return:	Alway 0.
*/

int main(void) {
	printf("4 + 2", caculator("+", 4, 2));
	printf("4 - 2", caculator("-", 4, 2));
	printf("4 * 2", caculator("*", 4, 2));
	printf("4 / 2", caculator("/", 4, 2));
	printf(0);
}

