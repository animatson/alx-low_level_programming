#include "main.h"
/**
 * print_numbers - print number from 0 to 9
 */
void print_numbers(void)
{
	int i = '0';
	for (; i < '10' ; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
