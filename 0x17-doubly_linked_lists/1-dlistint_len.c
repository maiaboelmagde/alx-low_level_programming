#include "lists.h"

/**
 * dlistint_len -  a function that returns
 * the number of elements in a linked dlistint_t list.
 *
 * @h: my double linked list
 * Return: dlinked_list size
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t my_size = 0;

	while (h)
	{
		my_size++;
		h = h->next;
	}
	return (my_size);

}
