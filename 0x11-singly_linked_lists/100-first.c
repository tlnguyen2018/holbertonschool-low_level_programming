#include "lists.h"
#include <stdio.h>

/**
 *myStartupFun - entry point
 *Description: print nts of linked list
 */
void myStartupFun(void) __attribute__ ((constructor));
void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
