#include <stdio.h>

void myStartupFunction(void) __attribute__((constructor));

/**
 * myStartupFunction - Function that prints the specified lines before main.
 */
void myStartupFunction(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
