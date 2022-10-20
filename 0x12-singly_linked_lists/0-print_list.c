#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h: input head
 * Return: always return number of element in list_t.
 */
size_t print_list(const list_t *h)
{
	unsigned int count = 0;
	list_t *tr = h;

	while (tr)
	{
		if (tr->str)
			printf("[%u] %s\n", tr->len, tr->str);
		else
			printf("[0] (nil)\n");
		++count;
		tr = tr->next;
	}
	return (count);
}
