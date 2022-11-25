#include <stdio.h>

/**
 * myStartupFun - Apply the constructor attribute
 *
 */

void myStartupFun(void) _attribute_((constructor));

/**
 * myStartupFun - implementation of myStartupFun
 */

void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("i bore my upon my back!\n");
}
