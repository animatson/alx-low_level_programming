#include <stdio.h>

/**
 * say - print something before main is executed.
 * Return: nothing.
 */
void say(void) __attribute__ ((constructor));

void say(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
