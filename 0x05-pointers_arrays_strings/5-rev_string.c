#include "main.h"

/**
 * rev_string - reverses a word
 * @s: The string to be printed.
 */
void rev_string(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len = len + 1;
	for (; len >= 0 ; len--)
		_putchar(s[len]);
	_putchar('\n');
}
