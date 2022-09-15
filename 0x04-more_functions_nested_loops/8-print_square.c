#include "main.h"
/**
 * print_square - a square is printed
 * @size: params
 */
void print_square(int size)
{
	int i, j;

	i = 0;
	j = 0;
	if (size > 0)
	{
		for (; i < size ; i++)
		{
			for (; j < size ; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
