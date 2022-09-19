#include<stdio.h>

/**
 * print_array - print integers
 * @a: pass by ref
 * @n: pass by value
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n ; i++)
		printf("%d, ", a[i]);
	printf("\n");
}
