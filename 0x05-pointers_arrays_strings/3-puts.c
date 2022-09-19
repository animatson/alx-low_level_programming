#include "main.h"
/**
 * _puts - function to put a string
 * @str: pass by ref
 * Return: nothing
 */
void _puts(char *str)
{
	int pos;

	for (pos = 0 ; *(str + pos) != '\0' ; pos++)
		_putchar(*(str + pos));
}
