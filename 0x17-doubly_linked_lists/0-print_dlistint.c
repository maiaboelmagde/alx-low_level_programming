#include "lists.h"

/**
 * print_dlistint - a function that prints all the elements of the list.
 * @h: list head
 * Return: numbet of elements
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t my_size = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		my_size++;
	}


	return (my_size);
}
