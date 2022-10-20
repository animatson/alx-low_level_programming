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

	while (h)
	{
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		++count;
		h = h->next;
	}
	return (count);
}
