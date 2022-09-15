#include "main.h"
/**
 * print_line - print line in terminal
 * @n: end of a line variable
 */
void print_line(int n)
{
	int i = 0;

	if (n <= 0)
		_putchar('\n');
	else
		for (; i < n ; i++)
			_putchar('_');
		_putchar('\n');
}
