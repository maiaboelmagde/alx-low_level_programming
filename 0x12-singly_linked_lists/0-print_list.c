#include <stdio.h>
#include "lists.h"

/**
 * print_list - the func prints elements of a linked list
 * @h: list_t list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t list_size = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		list_size++;
	}

	return (list_size);
}
