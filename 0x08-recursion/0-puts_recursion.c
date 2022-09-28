#include "main.h"
/**
 * _puts_recursion - print string in stdout
 * @s: input string
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (!*s)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s++);
	_puts_recursion(s);
}
