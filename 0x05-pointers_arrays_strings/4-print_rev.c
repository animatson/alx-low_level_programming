#include "main.h"
/**
 * print_rev - string in reverse manner
 * @s: by ref value
 * Return: nothing
 */
void print_rev(char *s)
{
	int len = _strlen(s);

	for (; len >= 0 ; len--)
		_putchar(s[len]);
	_putchar('\n');
}
