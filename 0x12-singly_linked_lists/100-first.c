#include <stdio.h>

/**
 * myStartupFun - Apply the constructor attribute to myStartupFun() so that it
 * is executed before main()
 *
 */

void myStartupFun(void) _attribute_ ((constructor));

/**
 * myStartupFun - implementation of myStartupFun
 */

void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my upon my back!\n");
}
