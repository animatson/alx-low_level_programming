#include "main.h"
/**
 * _puts - function to put a string
 * @str: pass by ref
 * Return: nothing
 */
void _puts(char *str)
{
	int pos;

	for (pos = 0 ; *(str + pos) != '\0' ; pos += 2)
		_putchar(*(str + pos));
	_putchar('\n');
}
