#include "lists.h"
#include <stdio.h>
/**
 * list_len - function that returns the number of elements in a linked list_t list.
 * @h: input header.
 * Return: Return: the number of nodes.
 */
size_t list_len(const list_t *h)
{
	unsigned int count = 0;

        while (h)
        {
                count++;
                h = h->next;
        }
        return (count);
}
